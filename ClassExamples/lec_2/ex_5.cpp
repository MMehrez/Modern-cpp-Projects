 #include <iomanip>
 #include <iostream>
 #include <sstream>
 using namespace std;

 int main () {
 // Combine variables into a stringstream.
 stringstream filename{"00205.txt"};
 // Create variables to split the string stream
 int num = 0;
 string ext;

 // Split the string stream using simple syntax
 filename >> num >> ext;

 // Tell your friends
 cout << "Number is: " << num << endl;
 cout << "Extension is: " << ext << endl;
 return 0;
}
