#include <iostream>
#include <string>

int main() {
  const std ::string source{"Copy this!"};
  std ::string dest = source; // copy string

  std ::cout << source << '\n';
  std ::cout << dest << '\n';
  return 0;
}
