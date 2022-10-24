#include <iostream>

using namespace std;

class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound" << endl;
    }
};

class Pig: public Animal {
  public:
    void animalSound() {
      cout << "The pig makes an oink sound" << endl;
    }
};

class Dog: public Animal {
  public:
    void animalSound() {
      cout << "The dog makes a bark sound" << endl;
    }
};

int main() {
  Animal animal;
  Pig pig;
  Dog dog;
  animal.animalSound();
  pig.animalSound();
  dog.animalSound();
  return 0;
}
