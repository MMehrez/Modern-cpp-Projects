#include <cstring>
#include <iostream>

int main() {
  const char source[] = "Copy this!";
  char dest[5];
  std ::cout << source << '\n';
  std ::strcpy(dest, source);
  std ::cout << dest << '\n';

  // source is const , no problem right?
  std ::cout << source << '\n';

  return 0;
}
