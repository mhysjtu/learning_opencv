# zlm、opencv教程
[https://blog.csdn.net/abc8730866/article/category/6730945/2](https://blog.csdn.net/abc8730866/article/category/6730945/2)
# 零、opencv数据结构
array elements should have one of the following types:  
|CV_8U	|8-bit unsigned integer      |uchar  |
|CV_8S	|8-bit signed integer	     |schar  |
|CV_16U	|16-bit unsigned integer     |ushort |
|CV_16S	|16-bit signed integer	     |short  |
|CV_32S	|32-bit signed integer	     |int    |
|CV_32F	|32-bit floating-point number|float  |
|CV_64F	|64-bit floating-point number|double |  
multi-channel arrays:  
- a tuple of several elements where all elements have the same type, called multi-channel arrays
1. CV_8UC1 TO CV_64FC4, for a numeber of channels from 1 to 4
2. CV_8UC(n) TO CV_64FC(n) or CV_MAKETYPE(CV_8U,n) TO CV_MAKETYPE(CV64F, n), when the channels is more than 4 or unknown at the compilation time  
examples:  
```C++
Mat cmtx(10,1,CV_64FC2); //matrix(10-element complex vector)  
Mat image(Size(1920,1080),CV_8UC3); //make a 3-channel color image of 1920 columns and 1080 rows  
Mat grayscale(image.size(), CV_MAKETYPE(image.depth(),1)); //make a 1-channel image of the same size and same channel type as img
```
**In the function image(a,b), a consists of the size of the image(the number of pixels), b consists of the number of channels and the grayscale level of each channel(CV_8UC3 means 3 channels, 0-255 value).**

# 一、装载、显示、存储、绘图
## 1.Mat的成员
- Mat image;
- image.cols,image.rows
- image.size()
- image.empty()
- image.channels()
## 2. flip函数
cv::flip(image, result, 1);
## 3. 绘图
1. cv::circle(image, cv::Point(x,y), radius, color, width);
2. cv::putText(image, context, cv::Point(x,y), cv::FONT_TYPE, size, color, width);

# 二、cv::Mat

# 三、操作像素
1. 加椒盐噪声
2. 降低灰度级
3. 迭代器遍历图像
4. 检查代码运行效率
5. 领域操作
6. 卷积操作
7. 简单图像运算
