#include <iostream>

using namespace std;

class MyClass {
  public:
    void myMethod() {
      cout << "Hello World" << endl;
    }

    void printNumber(int number);
};

void MyClass::printNumber(int number) {
  cout << "Number is: " << number << endl;
}

int main() {
  MyClass myObj;
  myObj.myMethod();
  myObj.printNumber(200);
}
