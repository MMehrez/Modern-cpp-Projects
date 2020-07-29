#ifndef SIFTS_
#define SIFTS_

#include <iostream>
#include <opencv2/opencv.hpp>
#include <string>
#include <tuple>
#include <vector>

#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/xfeatures2d.hpp>

using std::string;
using std::vector;

using cv::xfeatures2d::SiftDescriptorExtractor;
using cv::xfeatures2d::SiftFeatureDetector;

std::tuple<cv::Mat, cv::Mat> ComputeSifts(const string &fileName);

#endif // SIFTS_