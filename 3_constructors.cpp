#include <iostream>

using namespace std;

class Shape{
  public:
    int _length;
    int _height;
    Shape(int length, int height) {
      _length = length;
      _height = height;
    }

    void printArea() {
      cout << "Area is: " << _length * _height << endl;
    }
};

int main() {
  Shape rect(10, 20);
  rect.printArea();
  return 0;
}
