cmake_minimum_required(VERSION 2.8) 
project( Gesture_Recognition_Opencv3 ) 
find_package( OpenCV REQUIRED ) 
add_executable( Gesture_Recognition_Opencv3 DisplayImage.cpp ) 
target_link_libraries( Gesture_Recognition_Opencv3 ${OpenCV_LIBS} ) 
