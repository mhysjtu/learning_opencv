1. OpenCV Error: Assertion failed (size.width>0 && size.height>0) in imshow
图片未找到，因此未加载
解决：imread的路径不对，.目录是src所在的目录，正确的应该为imread("./photo/image1.jpeg")
