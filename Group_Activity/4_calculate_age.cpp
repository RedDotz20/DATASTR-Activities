#include <iostream>
using namespace std;

//* Create a program that will ask for year of birth and it will calculate and display the age. *//

int main() {
  int birthYear, currentYear, age;
  cout << "Enter Your Birth Year: "; cin >> birthYear;
  cout << "Enter Current Year: "; cin >> currentYear;
  age = currentYear - birthYear;
  
  cout << "Your Age is " << age;
}
