#ifndef IMAGE_CLASS_HPP_
#define IMAGE_CLASS_HPP_

#include <algorithm>
#include <iostream>
#include <vector>

#include "io_tools.hpp"

namespace igg {
class Image {
 public:
  Image() : rows_{0}, cols_{0}, data_(0 * 0, 0) {}
  Image(int rows, int cols)
      : rows_{rows}, cols_{cols}, data_((rows + 1) * (cols + 1), 0) {
    // data_[6] = 4; // this is just a test
  }
  // notice how the data_ vector is initialized with zeros
  int rows() const { return rows_; }
  int cols() const { return cols_; }
  std::vector<uint8_t> data() const { return data_; }  // <uint8_t>

  uint8_t at(int row, int col) const {
    // row major order
    return data_[row * (cols_) + col];
  }
  uint8_t& at(int r, int c) {
    return data_[r * (cols_) + c];  // return a reference to the r,c element
  }
  // nice thing to learn here. When you return a reference you can put the
  // function on the right hand side of the assignment operator (=).

  bool FillFromPgm(const std::string& file_name) {
    igg::io_tools::ImageData loaded_image =
        igg::io_tools::ReadFromPgm(file_name);
    rows_ = loaded_image.rows;
    cols_ = loaded_image.cols;
    data_ = loaded_image.data;
    return !(rows_ == 0 && cols_ == 0);
  }

  void WriteToPgm(const std::string& file_name) {
    igg::io_tools::ImageData image_data;
    image_data.rows = rows_;
    image_data.cols = cols_;
    image_data.data = data_;
    image_data.max_val = *std::max_element(data_.begin(), data_.end());
    // bool write_successful =
    igg::io_tools::WriteToPgm(image_data, file_name);
  }

 private:
  int rows_;
  int cols_;
  std::vector<uint8_t> data_;  //<uint8_t>
};
}  // namespace igg
#endif  // IMAGE_CLASS_HPP_