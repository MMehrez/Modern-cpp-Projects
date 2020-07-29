#include <filesystem>
#include <iostream>

#include <opencv2/core.hpp>
#include <opencv2/core/mat.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/xfeatures2d.hpp>

#include "homework_5.h"

namespace fs = std::filesystem;

void ipb::serialization::sifts::ConvertDataset(
    const std::filesystem::path& img_path) {
  static const fs::path bin_path =
      img_path.parent_path().parent_path();  // = "data/freiburg" if img_path =
                                             // "data/freiburg/images/"
  std::cout << bin_path << std::endl;
  fs::create_directories(bin_path / "bin");  // "data/freiburg/bin/"
  for (const auto& p : fs::directory_iterator(img_path)) {
    if (p.path().extension() == ".png") {
      auto read_image = cv::imread(p.path(), cv::IMREAD_GRAYSCALE);
      fs::path bin_path_img =
          bin_path / "bin" / p.path().stem();  // append with a forward slash
      bin_path_img += ".bin";                  // concatenate
      std::cout << bin_path_img << std::endl;
      ipb::serialization::Serialize(read_image, bin_path_img);
    }
  }
}

std::vector<cv::Mat> ipb::serialization::sifts::LoadDataset(
    const std::filesystem::path& bin_path) {
  std::vector<cv::Mat> ret_vector;
  for (const auto& p : fs::directory_iterator(bin_path)) {
    if (p.path().extension() == ".bin") {
      ret_vector.emplace_back(ipb::serialization::Deserialize(p.path()));
      // cv::Mat img_bin = ipb::serialization::Deserialize(p.path());
      std::cout << p.path() << std::endl;
    }
    // ret_vector.emplace_back(img_bin);
  }
  return ret_vector;
}