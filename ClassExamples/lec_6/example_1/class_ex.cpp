#include <iostream>

using std::cout;
using std::endl;

class Blah {
public:
  Blah() {}
  void SomeFunc() { cout << "non const" << endl; }
  void SomeFunc() const { cout << "const" << endl; }
};

int main() {
  Blah myblah;
  myblah.SomeFunc();

  const Blah &blah_ref = myblah;
  blah_ref.SomeFunc();

  return 0;
}