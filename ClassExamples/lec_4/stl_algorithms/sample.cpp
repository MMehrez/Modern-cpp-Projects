#include <algorithm>
#include <iostream>
#include <iterator>
#include <random>
#include <string>
using namespace std;

int main() {
  std::string in = "C++ is cool";
  std::string out;
  auto rnd_dev = std::mt19937{random_device{}()};
  const int kNLetters = 5;
  std::sample(in.begin(), in.end(), std::back_inserter(out), kNLetters,
              rnd_dev);

  cout << "from  : " << in << endl;
  cout << "sample: " << out << endl;
}
