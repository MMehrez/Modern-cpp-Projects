#include <cstdlib>
#include <iostream>
#include <random>

int my_number;
int compare;
int random_number;
const int range_from = 0;
const int range_to = 99;
std::random_device rand_dev;
std::mt19937 generator(rand_dev());
std::uniform_int_distribution<int> distr(range_from, range_to);

int main() {
  // Welcome back Mohamed :-) I love you!
  /* initialize random seed: */
  random_number = distr(generator);  // v1 in the range 0 to 99
  while (1) {
    std::cout << "Enter a Number between 0 and 99:" << std::endl;
    std::cin >> my_number;
    std::cout << "The Random Number is:" << std::endl;
    std::cout << random_number << std::endl;
    if (my_number > 99 || my_number < 0) {
      std::cerr << "[WARNING] : Number must be between 0 and 99" << std::endl;
    }
    if (std::cin.fail()) {
      std::cerr << "Error encountered, exiting..." << std::endl;
      return (EXIT_FAILURE);
    } else if (my_number == random_number) {
      std::cout << "You have guessed the number!" << std::endl;
      break;
    } else if (my_number > random_number) {
      std::cout << "Your number is larger than the target one!"
                << std::endl; /* code */
      std::cout << "The Random Number is:" << std::endl;
      std::cout << random_number << std::endl;
    } else if (my_number < random_number) {
      std::cout << "Your number is smaller than the target one!"
                << std::endl; /* code */
      std::cout << "The Random Number is:" << std::endl;
      std::cout << random_number << std::endl;
    }
  }
  std::cout << "The Random Number is:" << std::endl;
  std::cout << random_number << std::endl;
  return (EXIT_SUCCESS);
}