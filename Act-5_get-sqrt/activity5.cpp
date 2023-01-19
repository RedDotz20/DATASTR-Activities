#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

void sqrtOfSum() {
    int num1,num2,num3,num4; system("CLS");
    cout << "Enter 1st Value: "; cin >> num1; 
    cout << "Enter 2nd Value: "; cin >> num2; 
    cout << "Enter 3rd Value: "; cin >> num3; 
    cout << "Enter 4th Value: "; cin >> num4; system("CLS");
    cout << "The square root of " << num1 + num2 + num3 + num4 << " is ";
    cout << sqrt(num1 + num2 + num3 + num4);
};

int main() {
    sqrtOfSum();
    return 0;
}