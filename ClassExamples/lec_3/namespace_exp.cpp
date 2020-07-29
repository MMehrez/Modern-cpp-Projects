#include <cmath>
#include <iostream>
using std ::cout; // Explicitly use cout.
using std ::endl; // Explicitly use endl.

// Self -defined function power shadows std::pow
double pow(double x, int exp) {
  double res = 1.0;
  for (int i = 0; i < exp; i++) {
    res *= x;
  }
  return res;
}

int main() {
  cout << "2.0^2 = " << pow(2.0, 2) << endl;
  cout << "2.0^2 = " << std::pow(2.0, 2) << endl;
  return 0;
}