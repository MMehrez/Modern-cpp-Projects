#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  string file_name = "image.dat";
  int r = 0, c = 0;
  ifstream in(file_name, ios_base ::in | ios_base ::binary);
  if (!in) {
    return EXIT_FAILURE;
  }
  in.read(reinterpret_cast<char *>(&r), sizeof(r));
  in.read(reinterpret_cast<char *>(&c), sizeof(c));
  cout << "Dim: " << r << " x " << c << endl;
  vector<float> data(r * c, 0);
  in.read(reinterpret_cast<char *>(&data.front()),
          data.size() * sizeof(data.front()));
  for (float d : data) {
    cout << d << endl;
  }
  return 0;
}