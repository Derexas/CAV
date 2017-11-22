#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <iostream> 
#include "PatchMatch.h"



int main(int argc,char **argv){ 
	cv::Mat source, target;
	if (argc != 3) {
		std::cout << "needs 2 arguments" << std::endl;
		exit(0);
	}
	source = cv::imread(argv[1]);
	target = cv::imread(argv[2]);


	cv::Mat patchMatch = PatchMatch::apply(source,target, 5, 5);
	imwrite("result/patchMATCH.png", patchMatch );

	return 0; 
}
