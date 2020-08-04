#include <iostream>
using std ::cout;
using std ::endl;
class Hmm {
public:
  Hmm() { cout << "default" << endl; }
  Hmm(const Hmm &other) { cout << "copy" << endl; }
  Hmm(Hmm &&other) { cout << "move" << endl; }
  Hmm &operator=(const Hmm &other) {
    cout << "copy operator" << endl;
    return *this;
  }
  Hmm &operator=(Hmm &&other) {
    cout << "move operator" << endl;
    return *this;
  }
};
int main() {
  Hmm a;
  Hmm b = a;
  a = b;
  Hmm c = std::move(a);
  c = std::move(b);
  return 0;
}
