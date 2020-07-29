#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

auto UpperCase(char c) { return std::toupper(c); }

int main() {
  const std::string s("hello");
  std::string S{s};
  std::transform(s.begin(), s.end(), S.begin(), UpperCase);

  cout << s << endl;
  cout << S << endl;
}
