 #include <iostream>

 using namespace std;
 int main () {
 int num = 42; // Name has to fit on slides
 int& ref = num;
 const int& kRef = num;
 ref = 0;
 cout << ref << " " << num << " " << kRef << endl;
 num = 42;
 cout << ref << " " << num << " " << kRef << endl;
 return 0;
}
