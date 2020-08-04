#ifndef IMAGE_CLASS_HPP_
#define IMAGE_CLASS_HPP_

#include <iostream>
#include <vector>

namespace igg {
class Image {
 public:
  Image() {}
  Image(int rows, int cols) : rows_{rows}, cols_{cols}, data_(rows * cols) {}
  // notice how the data_ vector is initialized with zeros
  int rows() const { return rows_; }
  int cols() const { return cols_; }
  std::vector<uint8_t> data() const { return data_; }
  void at(int row, int col) const {}

 private:
  int rows_;
  int cols_;
  std::vector<uint8_t> data_;
};
}  // namespace igg
#endif  // IMAGE_CLASS_HPP_