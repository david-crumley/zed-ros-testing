execute_process(COMMAND "/home/nvidia/zed-ros/build/zed-ros-testing/vision_opencv/image_geometry/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/nvidia/zed-ros/build/zed-ros-testing/vision_opencv/image_geometry/catkin_generated/python_distutils_install.sh) returned error code ")
endif()