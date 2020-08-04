#include <iostream>
using std ::cout;
using std ::endl;
class Rectangle {
public:
  Rectangle(int w, int h) : width_{w}, height_{h} {} // initialization list
  int width() const { return width_; }               // getter
  int height() const { return height_; }             // getter

protected:
  int width_ = 0;
  int height_ = 0;
};

class Square : public Rectangle {
public:
  explicit Square(int size) : Rectangle{size, size} {}
};

int main() {
  Square sq(10);          // Short name to save space.
  Square my_square(4.0F); // 4.0 will be understood as an int
  cout << sq.width() << " " << sq.height() << endl;
  cout << my_square.width() << " " << my_square.height() << endl;
  return 0;
}