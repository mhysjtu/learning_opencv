0. download opencv: http://opencv.org/downloads.html 2.4.13.3
1. install dependencies:
sudo apt-get install build-essential libgtk2.0-dev libjpeg-dev libtiff4-dev libjasper-dev libopenexr-dev cmake python-dev python-numpy python-tk libtbb-dev libeigen2-dev yasm libfaac-dev libopencore-amrnb-dev libopencore-amrwb-dev libtheora-dev libvorbis-dev libxvidcore-dev libx264-dev libqt4-dev libqt4-opengl-dev sphinx-common texlive-latex-extra libv4l-dev libdc1394-22-dev libavcodec-dev libavformat-dev libswscale-dev
2. unzip and cmake
mkdir build
cd build
cmake ..
make -j4
sudo make install
3. cmakelists
set(OpenCV_DIR /usr/local/share/OpenCV)

find_package(OpenCV REQUIRED)

target_link_libraries(xxx ${OpenCV_LIBS})
