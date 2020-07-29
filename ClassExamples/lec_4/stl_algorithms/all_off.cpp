#include <algorithm>
#include <functional>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

#include "utils.hpp"

using namespace std;

inline bool even(int i) { return i % 2 == 0; };
int main() {
  std::vector<int> v(10, 2);
  std::partial_sum(v.cbegin(), v.cend(), v.begin());
  Print(v);

  bool all_even = all_of(v.cbegin(), v.cend(), even);
  if (all_even) {
    cout << "All numbers are even" << endl;
  }
}
