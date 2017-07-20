#include "faster_rcnn.hpp"
int main()
{
	string model_file = "/home/stefan/py-faster-rcnn/models/pascal_voc/ZF/faster_rcnn_alt_opt/faster_rcnn_test.pt";
	string weights_file = "/home/stefan/py-faster-rcnn/data/faster_rcnn_models/ZF_faster_rcnn_final.caffemodel";
    int GPUID=0;
	Caffe::SetDevice(GPUID);
	Caffe::set_mode(Caffe::GPU);
	Detector det = Detector(model_file, weights_file);
	det.Detect("/home/stefan/py-faster-rcnn/data/demo/123.jpg");
    return 0;
}
