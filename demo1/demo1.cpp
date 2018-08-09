
#include "opencv2/opencv.hpp"  


using namespace cv;
using namespace std;
int main(void)
{
   
    VideoCapture capture;  
  
    capture.open(0);  
    if (!capture.isOpened())  
    {  
        cout<<"No camera!\n"<<endl;  
        return -1;  
    }  
  
    while(1)
    {
        Mat frame;
        capture >> frame;

        if (frame.empty())  
            break;  
        imshow("show", frame);


        if(cvWaitKey(30) > 0)
            break;
    }


    return 0;
}
