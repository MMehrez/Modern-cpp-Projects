#include <iostream>
#include <random>


int main() {

const int range_from  = 0;
const int range_to    = 99;
std::random_device                  rand_dev;
std::mt19937                        generator(rand_dev());
std::uniform_int_distribution<int>  distr(range_from, range_to);

std::cout << distr(generator) << '\n';	

return 0;

}
