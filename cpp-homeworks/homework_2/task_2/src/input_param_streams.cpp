#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int file_num_1 = 0;
string file_extension_1;
int file_num_2 = 0;
string file_extension_2;

int main(int const argc, char const *argv[]) {
  // cout << "argc is: " << argc << endl;
  // cout << "argv is: " << argv << endl;
  stringstream filename_1{};
  stringstream filename_2{};
  if (argc > 3 || argc < 3) {
    cerr << "Error: the number of arguments (files) is incorrect" << endl;
    return EXIT_FAILURE;
  }
  filename_1 << argv[1]; // fetch the first string
  filename_2 << argv[2]; // fetch the second string
  filename_1 >> file_num_1 >> file_extension_1;
  filename_2 >> file_num_2 >> file_extension_2;

  if (file_extension_1 == ".txt" && file_extension_2 == ".txt") {
    cout << (file_num_1 + file_num_2) / 2 << endl;
  } else if (file_extension_1 == ".png" && file_extension_2 == ".png") {
    cout << (file_num_1 + file_num_2) << endl;
  } else if (file_extension_1 == ".txt" && file_extension_2 == ".png") {
    cout << file_num_1 % file_num_2 << endl;
  } else {
    cerr << "Error: file extensions are incorrect" << endl;
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}