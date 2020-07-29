#include <iostream>
#include <string>

#include <opencv2/opencv.hpp>
int main() {
  cv::Mat image = cv::Mat::zeros(100, 100, CV_8UC3);
  std ::string window_name = "Window name";
  cv::namedWindow(window_name, cv::WINDOW_AUTOSIZE);
  cv::imshow(window_name, image);
  cv::waitKey();
  for (int r = 0; r < image.rows; ++r) {
    for (int c = 0; c < image.cols; ++c) {
      // WARNING! WRONG TYPE USED!
      image.at<float>(r, c) = 1.0f;
    }
  }
  cv::imshow(window_name, image);
  cv::waitKey();
  return 0;
}