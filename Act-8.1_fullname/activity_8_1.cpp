#include <iostream>
#include <string>
using namespace std;

int main() {
  string firstName, middleName, lastName;

  cout << "Enter your First Name: "; getline(cin, firstName);
  cout << "Enter your Middle Name: "; getline(cin, middleName);
  cout << "Enter your Last Name: "; getline(cin, lastName);

  cout << "\nYour Full Name is \"";
  cout << firstName + " " + middleName + " " + lastName + "\"" << endl;

  return 0;
}