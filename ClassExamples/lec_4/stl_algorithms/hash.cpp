#include <functional>
#include <iostream>
#include <string>

int main() {
  std::string str = "Hashable element [string]";
  auto str_hash = std::hash<std::string>{}(str);

  std::cout << "String: " << str << std::endl;
  std::cout << "Hash  : " << str_hash << std::endl;
  return 0;
}