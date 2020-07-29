#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

#include "utils.hpp"
using namespace std;

int main() {
  std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << "before rotate: ";
  Print(v);

  std::rotate(v.begin(), v.begin() + 2, v.end());
  cout << "after  rotate: ";
  Print(v);
}
