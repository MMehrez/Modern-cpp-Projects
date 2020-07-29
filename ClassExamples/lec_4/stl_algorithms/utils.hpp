#include <iostream>

template <class Container>
void Print(const Container& v) {
  for (int n : v) {
    std::cout << n << ' ';
  }
  std::cout << std::endl;
}
