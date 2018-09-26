#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;

int main(int argc, char **argv)
{
	Mat img=imread("./photo/image1.jpeg");//这里的.路径是src所在的目录
	namedWindow("image1");
	imshow("image1", img);
	waitKey(6000);
	//return 0;
}
