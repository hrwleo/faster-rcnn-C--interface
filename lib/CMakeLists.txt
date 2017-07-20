cmake_minimum_required (VERSION 2.8)

SET (SRC_LIST faster_rcnn.cpp)
include_directories ( /home/stefan/py-faster-rcnn/caffe-fast-rcnn/include
    /home/stefan/py-faster-rcnn/lib/nms 
    /usr/local/include
    /usr/include/python2.7
    /usr/local/cuda-8.0/include
    /usr/include    
    /usr/include/boost/numeric/odeint/external )

add_library(faster_rcnn SHARED ${SRC_LIST})


