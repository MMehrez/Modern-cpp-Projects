#include <iostream>

class SomeClass {
public:
  SomeClass(){};               // Default constructor.
  SomeClass(int a){};          // Custom constructor.
  SomeClass(int a, float b){}; // Custom constructor.
  ~SomeClass(){};              // Destructor.
};
// How to use them?
int main() {
  SomeClass var_1;     // Default constructor
  SomeClass var_2(10); // Custom constructor
  // Type is checked when using {} braces. Use them!
  SomeClass var_3{10};          // Custom constructor
  SomeClass var_4 = {10};       // Same as var_3
  SomeClass var_5{10, 10.0};    // Custom constructor
  SomeClass var_6 = {10, 10.0}; // Same as var_5
  return 0;
}