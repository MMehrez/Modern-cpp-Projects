#include <iostream>

int main () {
// Create an inocent float variable
const float var = 84.78;

// Let's compare the same number , they should be the same...
const bool cmp_result = (84.78 == var);
std :: cout << "84.78 equal to " << var << "?\n"
           << std :: boolalpha << cmp_result << '\n';
return 0;
}
