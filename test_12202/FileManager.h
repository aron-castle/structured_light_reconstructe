#ifndef __FILEMANAGER_H__
#define __FILEMANAGER_H__

#include <string>
#include <opencv2/core.hpp>

using namespace std;

const string storintrinsicsyml  = "../mydata/output/intrinsics.yml";
const string storextrinsicsyml  = "../mydata/output/extrinsics.yml";

const string unwrappedphaseimageleft = "../mydata/output/unwrapped_phase_left.bmp";
const string unwrappedphaseimageright= "../mydata/output/unwrapped_phase_right.bmp";

void savepnts3D(const char* filename, cv::Mat& mat);
void savePhase(const char* filename, cv::Mat& mat);

#endif	//__FILEMANAGER_H__
