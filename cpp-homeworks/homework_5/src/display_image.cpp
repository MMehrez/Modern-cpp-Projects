#include <cstdlib>
#include <iostream>
#include <string>

#include <opencv2/opencv.hpp>

int main() {
  auto image = cv::imread("lenna.png", cv::IMREAD_GRAYSCALE);
  if (image.empty()) {
    std::cerr << "No image data" << std::endl;
    return EXIT_FAILURE;
  }
  cv::namedWindow("lenna: this is the window name", cv::WINDOW_AUTOSIZE);
  cv::imshow("lenna: this is the window name", image);
  cv::waitKey(0);

  return 0;
}