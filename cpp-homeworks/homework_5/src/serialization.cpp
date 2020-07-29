#include <fstream>  // for the file streams
#include <iostream>
#include <string>
#include <tuple>
#include <vector>

#include <opencv2/core.hpp>
#include <opencv2/core/mat.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/xfeatures2d.hpp>

#include "homework_5.h"

using std::ifstream;
using std::ios_base;
using std::ofstream;
using std::string;
using std::vector;

using std::cout;
using std::endl;

void ipb::serialization::Serialize(const cv::Mat &m,
                                   const std::string &filename) {
  auto [descriptors, image_with_kp] = ComputeSifts(m);
  //   ofstream file(filename, ios_base::out | ios_base::binary);
  //   int rows = descriptors.rows;
  //   int cols = descriptors.cols;
  //   vector<float> vec(rows * cols);
  //   file.write(reinterpret_cast<char*>(&rows), sizeof(rows));
  //   file.write(reinterpret_cast<char*>(&cols), sizeof(cols));
  //   file.write(reinterpret_cast<char*>(&vec.front()), vec.size() *
  //   sizeof(float));

  ofstream fs(filename, std::fstream::binary);

  // Header
  int type = m.type();
  int channels = m.channels();
  fs.write((char *)&m.rows, sizeof(int));    // rows
  fs.write((char *)&m.cols, sizeof(int));    // cols
  fs.write((char *)&type, sizeof(int));      // type
  fs.write((char *)&channels, sizeof(int));  // channels

  // Data
  if (m.isContinuous()) {
    fs.write(m.ptr<char>(0), (m.dataend - m.datastart));
  } else {
    int rowsz = CV_ELEM_SIZE(type) * m.cols;
    for (int r = 0; r < m.rows; ++r) {
      fs.write(m.ptr<char>(r), rowsz);
    }
  }
}

cv::Mat ipb::serialization::Deserialize(const std::string &filename) {
  //   int r = 0, c = 0;
  //   ifstream in(filename, ios_base::in | ios_base::binary);
  //   if (!in) {
  //     return EXIT_FAILURE;
  //   }
  //   in.read(reinterpret_cast<char *>(&r), sizeof(r));
  //   in.read(reinterpret_cast<char *>(&c), sizeof(c));
  //   cout << "Dim: " << r << " x " << c << endl;
  //   vector<float> data(r * c, 0);
  //   //   in.read(reinterpret_cast<char*>(&data.front()),
  //   //           data.size() * sizeof(data.front()));
  //   return in.read(reinterpret_cast<char *>(&data.front()),
  //                  data.size() * sizeof(data.front()));

  ifstream fs(filename, std::fstream::binary);

  // Header
  int rows, cols, type, channels;
  fs.read((char *)&rows, sizeof(int));      // rows
  fs.read((char *)&cols, sizeof(int));      // cols
  fs.read((char *)&type, sizeof(int));      // type
  fs.read((char *)&channels, sizeof(int));  // channels

  // Data
  cv::Mat mat(rows, cols, type);
  fs.read((char *)mat.data, CV_ELEM_SIZE(type) * rows * cols);

  return mat;
}
