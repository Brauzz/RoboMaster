//
// Created by parallels on 3/25/17.
//

#ifndef VIDEOCAPTURE_VIDEORECORD_H
#define VIDEOCAPTURE_VIDEORECORD_H
#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;
class VideoRecord {
private:
    int frame_width,frame_height;
    int status=0;//0 for not recording,1 for recording,2 for recording stoped
    int frame_count=0;
    VideoCapture vcap;
    VideoWriter video;

public:
    VideoRecord();
    VideoRecord(int deviceid);
    void CreateVideo(string path);
    void SaveOneFrame();
    void Recording();
    ~VideoRecord();
};


#endif //VIDEOCAPTURE_VIDEORECORD_H
