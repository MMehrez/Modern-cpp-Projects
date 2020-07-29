#include <iostream>

int main () { // Start of main scope.
float some_float = 13.13f; // Create variable.
 { // New inner scope.
 auto another_float = some_float ; // Copy variable.
 } // another_float dies.
	std::cout<<"first float:" <<some_float << std::endl;
       // std::cout<<"second float:" <<another_float << std::endl; // this will not work
 return 0;
 } // some_float dies.
