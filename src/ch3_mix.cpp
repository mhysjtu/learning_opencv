#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;

int main(int argc, char** argv)
{
	Mat girl=imread("./photo/image2.png");
	namedWindow("girl");
	imshow("girl", girl);

	Mat image=imread("./photo/image3.png");
	Mat logo=imread("./photo/image4.png");

	//定义一个Mat类型，用于存放图像的ROI
	//ROI相当与定义图像中的一块区域
	Mat imageROI;
	//方法一
	imageROI=image(Rect(800,350,logo.cols,logo.rows));
	//方法二
	//imageROI=image(Range(350,350+logo.rows), Range(800,800+logo.cols))

	//将logo加到原图上
	addWeighted(imageROI, 0.5, logo, 0.3, 0., imageROI);

	//显示结果
	namedWindow("mix");
	imshow("mix", image);

	//输出图像，jpg和png都可以
	imwrite("./photo/mix.jpg",image);
	
	//等待按键，用于让图像显示。若没有这一句，图片会一闪而过
	waitKey();

	return 0;
}

