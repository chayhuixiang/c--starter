#include <iostream>

using namespace std;

class MyClass {
  public:
    int myNum;
    string myString;
};

int main() {
  MyClass myobj;
  myobj.myNum = 15;
  myobj.myString = "test";

  cout << "MyNum is: " << myobj.myNum << endl;
  cout << "MyString is: " << myobj.myString << endl;
  return 0;
}
