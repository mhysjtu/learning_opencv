add_executable(helloworld helloworld.cpp)

set(OpenCV_DIR /usr/local/share/OpenCV)

find_package(OpenCV REQUIRED)

add_executable(load_image image.cpp)
target_link_libraries(load_image ${OpenCV_LIBS})
