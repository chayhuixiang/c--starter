#include <iostream>

using namespace std;

class ClassOne {
  public:
    void methodOne() {
      cout << "Method One!" << endl;
    }
};

class ClassTwo {
  public:
    void methodTwo() {
      cout << "Method Two!" << endl;
    }
};

class ClassThree: public ClassOne, public ClassTwo {

};

int main() {
  ClassThree classThreeObj;
  classThreeObj.methodOne();
  classThreeObj.methodTwo();
  return 0;
}
