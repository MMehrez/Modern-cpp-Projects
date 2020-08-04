#include <iostream>
#include <string>
using namespace std; // Save space on slides.
void Print(const string &str) { cout << "lvalue: " << str << endl; }

void Print(string &&str) { cout << "rvalue: " << str << endl; }

int main() {
  string hello = "hi";
  Print(hello);
  Print("world"); // rvalue because "world" can't stand on the left of an
  // assignment operator (=)
  string hello_new_owner = std ::move(hello);
  Print(hello_new_owner);
  // DO NOT access "hello" after move!
  Print(hello); // this will not work as you guessed ;-)
  // (coding horror)
  return 0;
}