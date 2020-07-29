#include <cstdlib>
#include <iostream>
#include <string>

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>

#include "homework_5.h"

int main() {
  auto [descriptors, image_with_kp] = ComputeSifts("lenna.png");

  cv::namedWindow("SIFT detections", cv::WINDOW_AUTOSIZE);
  cv::imshow("SIFT detections", image_with_kp);

  // cv::namedWindow("SIFT vector as image", cv::WINDOW_AUTOSIZE);
  // cv::imshow("SIFT vector as image", descriptors);

  std::cout << "Number of SIFTs: " << descriptors.rows << "\n"
            << "Size of each SIFT: " << descriptors.cols << "\n";

  // std::cout << descriptors << "\n";

  cv::waitKey(0);
  return 0;
}