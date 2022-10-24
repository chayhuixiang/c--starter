#include <iostream>

using namespace std;

class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut!" << endl;
    }
};

class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << "Car Brand: " << myCar.brand << " | Car Model: " << myCar.model << endl;
  return 0;
}
