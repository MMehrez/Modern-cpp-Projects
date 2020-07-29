#include <iostream>
#include <map>
using namespace std;
int main() {
  using StudentList = std ::map<int, string>;
  StudentList cpp_students;
  // Inserting data in the students dictionary
  cpp_students.emplace(1509, "Nacho");   // [1]
  cpp_students.emplace(1040, "Pepe");    // [0]
  cpp_students.emplace(8820, "Marcelo"); // [2]
  for (const auto &[id, name] : cpp_students) {
    cout << "id: " << id << ", " << name << endl;
  }

  std ::map<char, int> my_dict{{'a', 27}, {'b', 3}};
  for (const auto &[key, value] : my_dict) {
    cout << key << " has value " << value << endl;
  }
  return 0;
}