#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main() {
  std::vector<int> v{3, 1, 4, 1, 0, 5, 9};

  auto result = std::min_element(v.begin(), v.end());
  cout << *result << endl;
  auto min_location = std::distance(v.begin(), result);
  cout << "min at: " << min_location << endl;
}
