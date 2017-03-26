//
// Created by parallels on 3/25/17.
//

#include "VideoRecorder.h"
VideoRecorder videoRecorder;
VideoRecorder::VideoRecorder(){}
VideoRecorder::VideoRecorder(int deviceid) {
    vcap.open(deviceid);
    if(vcap.isOpened()){
        cout<<"Error opening camera id"<<deviceid<<endl;
        exit(0);
    }
    frame_width=vcap.get(CV_CAP_PROP_FRAME_WIDTH);
    frame_height=vcap.get(CV_CAP_PROP_FRAME_HEIGHT);
}
void VideoRecorder::OpenCamera(int deviceid){
    vcap.open(deviceid);
    if(vcap.isOpened()){
        cout<<"Error opening camera id"<<deviceid<<endl;
        exit(0);
    }
    frame_width=vcap.get(CV_CAP_PROP_FRAME_WIDTH);
    frame_height=vcap.get(CV_CAP_PROP_FRAME_HEIGHT);
}
void VideoRecorder::CloseCamera() {
    if(vcap.isOpened())vcap.release();
}

void VideoRecorder::CreateVideo(string path){
    ReleaseVideo();
    video.open(path,CV_FOURCC('M','P','4','2'),10,Size(frame_width,frame_height),true);
    frame_count=0;
    status=0;

}
void VideoRecorder::ReleaseVideo() {
    if(video.isOpened())video.release();
}
void VideoRecorder::SaveOneFrame(){
    Mat frame;
    vcap>>frame;
    video.write(frame);
    frame_count++;
}
void VideoRecorder::Recording(){
    while (status==1){
        assert(video.isOpened());
        SaveOneFrame();
    }
    if(status==2)
        video.release();
}
VideoRecorder::~VideoRecorder(){
    vcap.release();
}
int VideoRecorder::GetStatus() { return status;}
int VideoRecorder::SetStutus(int data) {
    status=data;
    return status;
}

void* thread_video_record(void *arg){
    videoRecorder.OpenCamera(0);

    while(1){
        if(videoRecorder.GetStatus()==1){
            videoRecorder.Recording();

        }


    }
    videoRecorder.Recording();



}