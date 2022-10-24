#include <iostream>

using namespace std;

class Employee {
  private:
    int salary;
  public:
    Employee(int _salary) {
      salary = _salary;
    }

    void setSalary(int _salary) {
      salary = _salary;
    }

    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myEmployee(100);
  cout << "My Employee's salary is: " << myEmployee.getSalary() << endl;
  myEmployee.setSalary(200);
  cout << "My Employee's salary is: " << myEmployee.getSalary() << endl;
  return 0;
}
