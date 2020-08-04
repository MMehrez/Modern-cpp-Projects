#include <iostream>
#include <string>
using namespace std; // Save space on slides.

class Printer {
public:
  void Print(const string &str) {
    // some_str = str;
    cout << "lvalue: " << str << endl;
  }
  void Print(string &&str) {
    some_str = str;
    cout << "rvalue: " << str << endl;
  }

private:
  std::string some_str;
};

int main() {
  string hello = "hi";
  Printer my_printer;
  my_printer.Print(hello);
  my_printer.Print("world"); // rvalue because "world" can't stand on the left
                             // of an assignment operator (=)
  my_printer.Print(std ::move(hello));
  // DO NOT access "hello" after move!
  my_printer.Print(hello); // Don't do that even if it might work sometimes
  // cout << "after move: " << hello << endl;

  return 0;
}