#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::map;
using std::string;
using std::vector;

using std::array;

void Print(array<int, 10> &arr) {
  for (auto elem : arr) { // I am just trying out range for loop here :D
    cout << elem << " ";
  }
  cout << endl;
  //   for (int i = 0; i < 10; i++) {
  //     cout << arr[i] << " ";
  //   }
  //   cout << endl;
}

int main() {
  array<int, 10> s = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};
  cout << "Before sorting: ";
  Print(s);
  std ::sort(s.begin(), s.end());
  cout << "After  sorting: ";
  Print(s);
  return 0;
}