#include <iostream>
using namespace std;

//* Create a program that will calculate the distance travelled of a car. *//

int main() {
  int distance, velocity, time;
  cout << "\nEnter the Velocity: "; cin >>velocity;
  cout <<"Enter the Time: "; cin >> time;
  
  distance = velocity*time; // Formula
  cout << "The Distance of the Given Time and Velocity is "; 
  cout << distance <<" meters.";
  return 0;
}