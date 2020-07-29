#include <iostream>
#include <tuple>
using namespace std;

auto Foo() { return make_tuple("Super Variable", 5); }

int main() {
  auto [name, value] = Foo();
  cout << name << " has value :" << value << endl;
  return 0;
}
