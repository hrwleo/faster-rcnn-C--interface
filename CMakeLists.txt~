cmake_minimum_required (VERSION 2.8)

project (Interface)

add_executable(main  main.cpp)

include_directories ( /home/stefan/py-faster-rcnn/caffe-fast-rcnn/include
    /home/stefan/faster_cxx_lib/lib
    /home/stefan/py-faster-rcnn/lib
    /home/stefan/py-faster-rcnn/lib/nms 
    /usr/local/include
    /usr/include/python2.7
    /usr/local/cuda-8.0/include
    /usr/include    
    /usr/include/boost/numeric/odeint/external )

#所以要么在这里直接加入完整路径或者同通过另一条语句find_library()，这种方式也比较好，直接去指定路径查找，返回相应的绝对路径也可避免直接添加地址的问题
#gpu_nms.so 在py-faster-rcnn根目录下的lib\nms中，直接make就会生成这个so文件
target_link_libraries(main /home/stefan/faster_cxx_lib/lib/libfaster_rcnn.so
    /home/stefan/py-faster-rcnn/caffe-fast-rcnn/build/lib/libcaffe.so
    /home/stefan/py-faster-rcnn/lib/nms/gpu_nms.so 
    /usr/local/lib/libopencv_highgui.so 
    /usr/local/lib/libopencv_core.so 
    /usr/local/lib/libopencv_imgproc.so 
    /usr/local/lib/libopencv_imgcodecs.so
    /usr/lib/x86_64-linux-gnu/libglog.so
    /usr/lib/x86_64-linux-gnu/libboost_system.so
    /usr/lib/x86_64-linux-gnu/libboost_python.so
    /usr/lib/x86_64-linux-gnu/libglog.so
    /usr/lib/x86_64-linux-gnu/libpython2.7.so
    )
