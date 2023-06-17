#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <cstring>


using namespace cv;
using namespace std;

int main() 
{
	Mat m1(3, 3, CV_32F, 2.0f);
	cerr << m1 << endl;

	//[2, 2, 2;
	//2, 2, 2;
	//2, 2, 2]

	Mat m2;
	m1.convertTo(m2, CV_8U, 0.5);
	cerr << m2 << endl;

	//[1, 1, 1;
	//1, 1, 1;
	//1, 1, 1]
}