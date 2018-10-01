#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
using namespace cv;

int main(int argc, char **argv)
{
	//--------------------------------
	Mat image;
	std::cout<<"No image is" << image.rows <<"*"<<image.cols<<"\nsize"<<image.size()<<std::endl;	//空对象大小为0×0
	image = imread("./photo/lena.jpg");
	if (image.empty())
	{
		std::cout<<"ERROR!"<<std::endl;
	}
	
	namedWindow("origin image");
	imshow("origin image",image);
	//因为它是控制台窗口，会在main函数结束时关闭，所以要增加一个额外的highgui函数，需要用户键入才能结束程序
	waitKey(0);	//0表示永远地等待;正数表示等待指定的毫秒数
	//--------------------------------
	Mat result;
	flip(image,result,1);	//正数表示水平反转；0表示垂直；负数表示水平和垂直
	
	//验证在反转过的图像上修改，是否会改变原图
	circle(result,
			Point(300,300),
			100,
			0,
			3);
	imshow("after flip origin image",image);
	
	namedWindow("output image");
	imshow("output image",result);
	waitKey(0);
	
	//----------------------------------
	Mat image_gray = imread("./photo/lena.jpg", 0);
	Mat image_color= imread("./photo/lena.jpg", 1);
	std::cout<<"gray has " <<image_gray.channels()<<" channels."<<std::endl;
	std::cout<<"color has "<<image_color.channels()<<" channels."<<std::endl;
	
	//--------------------------------
	circle(image_gray,
			Point(300,300),	//中心点坐标
			100,			//半径
			0,				//颜色，0表示黑色
			3);				//厚度
	putText(image_gray,
			"She is lena",		//文本内容
			Point(200,450),		//文本位置
			FONT_HERSHEY_PLAIN,	//字体类型
			2.0,				//字体大小
			255,				//字体颜色，255白色
			2);					//文本厚度
	
	namedWindow("drawing");
	imshow("drawing", image_gray);
	waitKey(0);
	return 0;

}
