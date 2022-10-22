#include <iostream>
#include <math.h>
using namespace std;

//* Create a program that will convert hours to seconds *//

int main() {
  int hours, seconds;
  cout << "Please Enter the Number of hours: "; cin >> hours;
  seconds = hours * pow(60,2);
  cout << hours << " Hours = " << seconds << " Seconds";
  return 0;
}