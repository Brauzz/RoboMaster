//
// Created by parallels on 3/24/17.
//

#include "ReceiveHandler.h"
#include "UDPServer.h"
#include "UDPClient.h"
#include "protocol.h"
#include <time.h>

#define video_path "/home/parallels/Video"
//#define video_path "/home/ubuntu/Video"

#include "protocol.pb-c.h"
#include <pthread.h>
queue<Message*> data_queue;
pthread_mutex_t data_mutex=PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t thread_message_mutex=PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t thread_video_mutex=PTHREAD_MUTEX_INITIALIZER;

pthread_cond_t thread_video_cond=PTHREAD_COND_INITIALIZER;
pthread_cond_t thread_message_cond=PTHREAD_COND_INITIALIZER;


void callback_receive(BufferData &data){

    Message* temp=message__unpack(NULL,data.len,data.data);
    pthread_mutex_lock(&data_mutex);
    data_queue.push(temp);
    pthread_mutex_unlock(&data_mutex);

}
void callback_finish(){
    if(pthread_mutex_trylock(&thread_message_mutex)==0){//lock successfully and signal the SendQueueThread
        pthread_cond_signal(&thread_message_cond);
        pthread_mutex_unlock(&thread_message_mutex);
    }

}
void* thread_server_udp(void *arg){
    UDPServer udpServer(6001);
    udpServer.setReceiveCallback(callback_receive);
    udpServer.setFinishCasllback(callback_finish);
    udpServer.listen();

}
void* thread_message_handler(void *arg){
    UDPClient udpClient;

    while (1){
        pthread_mutex_lock(&thread_message_mutex);
        while (!data_queue.empty()){
            pthread_mutex_lock(&data_mutex);
            Message* message=data_queue.front();
            data_queue.pop();
            pthread_mutex_unlock(&data_mutex);
            if(message->messagetype==MESSAGE__MESSAGE_TYPE__VideoRecord){
                VideoRecord* messagevideoRecord=video_record__unpack(NULL,message->data.len,message->data.data);

                if(messagevideoRecord->control==VIDEO_RECORD__CONTROL_TYPE__Start){
                    cout<<"start recording"<<endl;
                    unsigned long timestamp=(unsigned long)time(NULL);

                    string name=string(messagevideoRecord->devicename)+"_"+string(messagevideoRecord->deviceid)+"_"+to_string(timestamp)+".avi";
                    videoRecorder.CreateVideo1((char*)(string(video_path)+"/"+name).c_str());
                    videoRecorder.SetStutus(1);
                    extern pthread_mutex_t thread_video_record_mutex;
                    extern pthread_cond_t thread_video_record_cond;
                    pthread_cond_signal(&thread_video_record_cond);
                    pthread_mutex_unlock(&thread_video_record_mutex);


//                    extern pthread_mutex_t thread_video_capture_mutex;
//                    extern pthread_cond_t thread_video_capture_cond;
//                    pthread_cond_signal(&thread_video_capture_cond);
//                    pthread_mutex_unlock(&thread_video_capture_mutex);


                    VideoRecord_Status(videoRecorder.GetStatus());
                }
                else if(messagevideoRecord->control==VIDEO_RECORD__CONTROL_TYPE__Stop){
                    cout<<"stop recording"<<endl;
                    videoRecorder.SetStutus(2);
                    VideoRecord_Status(videoRecorder.GetStatus());

                }
                else if(messagevideoRecord->control==VIDEO_RECORD__CONTROL_TYPE__Status){
                    cout<<"check status"<<endl;
                    VideoRecord_Status(videoRecorder.GetStatus());
                }
                else{

                }
                video_record__free_unpacked(messagevideoRecord,NULL);
                message__free_unpacked(message,NULL);

            }



        }
        //pthread_mutex_unlock(&thread_message_mutex);
        pthread_cond_wait(&thread_message_cond,&thread_message_mutex);
        pthread_mutex_unlock(&thread_message_mutex);
    }


}