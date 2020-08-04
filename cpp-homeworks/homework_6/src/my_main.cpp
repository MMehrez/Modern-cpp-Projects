#include <iostream>

#include "homework_6.h"

using std::cout;
using std::endl;

int main() {
  igg::Image my_image(3, 3);

  cout << "rows: " << my_image.rows() << endl;
  cout << "cols: " << my_image.cols() << endl;
  cout << "data[1]: " << my_image.data()[1] << endl;
  cout << "data size: " << my_image.data().size() << endl;
  auto mydata = my_image.data();

  return 0;
}