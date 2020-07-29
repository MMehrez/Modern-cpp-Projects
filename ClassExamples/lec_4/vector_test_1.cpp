#include <iostream>
#include <string>
#include <vector>
using std ::cout;
using std ::endl;

int main() {
  std ::vector<int> numbers = {1, 2, 3};
  std ::vector<std ::string> names = {"Nacho", "Cyrill"};

  names.emplace_back("Roberto");

  cout << "First name : " << names.front() << endl;
  cout << "Last number: " << numbers.back() << endl;
  return 0;
}