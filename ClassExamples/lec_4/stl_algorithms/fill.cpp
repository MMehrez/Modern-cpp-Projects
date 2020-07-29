#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

#include "utils.hpp"
using namespace std;

int main() {
  std::vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  std::fill(v.begin(), v.end(), -1);

  Print(v);
}
