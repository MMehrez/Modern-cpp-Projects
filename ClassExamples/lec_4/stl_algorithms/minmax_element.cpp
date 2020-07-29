#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main() {
  using std::minmax_element;

  auto v = {3, 9, 1, 4, 2, 5, 9};
  auto [min, max] = minmax_element(begin(v), end(v));

  cout << "min = " << *min << endl;
  cout << "max = " << *max << endl;
}