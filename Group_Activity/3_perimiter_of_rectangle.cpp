#include <iostream>
using namespace std;

//* Create a program that will calculate a perimeter of a rectangle *//

int main() {
  float width, length, perimeter;
  cout << "Enter the Width of a Rectangle: "; cin >> width;
  cout << "\nEnter the Length of a Rectangle: "; cin >> length;
    
  perimeter = 2 * (length + width);
  cout << "\nThe Perimeter of a Rectangle is " << perimeter;
  return 0;
}