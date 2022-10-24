#include <iostream>

using namespace std;

class Employee {
  protected:
    int salary;
};

class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int _salary) {
      salary = _salary;
    }

    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer programmer;
  programmer.setSalary(500);
  cout << "Programmer Salary: " << programmer.getSalary() << endl;

  programmer.bonus = 1000;
  cout << "Programmer Bonus: " << programmer.bonus << endl;
  return 0;
}
