#include <iostream>

#include "homework_6.h"

using std::cout;
using std::endl;

int main() {
  igg::Image my_image_1;
  igg::Image my_image(3, 3);

  cout << "number of rows: " << my_image.rows() << endl;
  cout << "number cols: " << my_image.cols() << endl;
  cout << "data[5]: " << my_image.data()[5] << endl;
  cout << "data size: " << my_image.data().size() << endl;
  // cout << "at test: " << my_image.at(1, 2) << endl;
  auto mydata = my_image.data();
  for (int i = 0; i <= 3; i++) {
    cout << "insert at (1,2): " << i << endl;
    my_image.at(1, 2) = i;
    cout << "the value at (1,2) is: " << +my_image.at(1, 2) << endl;
    // Adding a unary + operator before the variable of any primitive data type
    // will give printable numerical value instead of ASCII character(in case of
    // char type == uint8_t).
  }

  bool test_equality = 0;
  if (my_image.at(1, 2) == 3) {
    test_equality = true;
  }
  cout << test_equality
       << endl;  // just to test that unit8_t can be compared with numbers

  return 0;
}