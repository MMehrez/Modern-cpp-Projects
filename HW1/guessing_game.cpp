#include <iostream>
#include <cstdlib>

int main() {
	// Welcome back Mohamed :-) I love you!
	double my_number;	
	double compare; 
	double random_number;
	  /* initialize random seed: */
	srand (time(NULL));
	random_number = rand() % 100; // v1 in the range 0 to 99	
	while (1) {
		std::cout << "Enter a Number between 0 and 99:" << std::endl;
		std::cin >> my_number;	
	// 	std::cout << "Hello World!" << std::endl;
		if (my_number == random_number)
		{
			std::cout << "You have guessed the number!" << std::endl;
			break;
		}
		else if (my_number > random_number)
		{
			std::cout << "Your number is larger than the target one!" << std::endl;			/* code */
		}
		else if (my_number < random_number)
		{
			std::cout << "Your number is smaller than the target one!" << std::endl;			/* code */
		}
	}
	std::cout<< "The Random Number is:" << std::endl;	
	std::cout<< random_number << std::endl;	
	return 0;
}