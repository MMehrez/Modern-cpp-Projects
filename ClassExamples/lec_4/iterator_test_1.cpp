#include <iostream>
#include <map>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::map;
using std::string;
using std::vector;

int main() {
  vector<double> x{1, 2, 3};
  for (auto it = x.begin(); it != x.end(); ++it) {
    cout << *it << endl;
  }
  // Map iterators
  map<int, string> m = {{1, "hello"}, {2, "world"}};
  map<int, string>::iterator m_it = m.find(1);
  cout << m_it->first << ":" << m_it->second << endl;

  auto m_it2 = m.find(1); // same thing
  cout << m_it2->first << ":" << m_it2->second << endl;

  if (m.find(3) == m.end()) {
    cout << "Key 3 was not found\n";
  }

  return 0;
}