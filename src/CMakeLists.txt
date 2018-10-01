add_executable(helloworld helloworld.cpp)

set(OpenCV_DIR /usr/local/share/OpenCV)

find_package(OpenCV REQUIRED)

add_executable(load_image image.cpp)
target_link_libraries(load_image ${OpenCV_LIBS})

add_executable(mix_image ch3_mix.cpp)
target_link_libraries(mix_image ${OpenCV_LIBS})

add_executable(drawing opencv_samples/drawing.cpp)
target_link_libraries(drawing ${OpenCV_LIBS})

add_executable(zlm_ch1 zlm_tutorials/ch1.cpp)
target_link_libraries(zlm_ch1 ${OpenCV_LIBS})
