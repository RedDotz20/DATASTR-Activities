#include<iostream>
#include<stdlib.h>
using namespace std;

int main () {
    int hrs, min; system("CLS");
    cout << "Enter hours: "; cin >> hrs;
    cout << "Enter minutes: "; cin >> min; system("CLS");

    //* Print Result
    cout << hrs << " Hours and " << min << " Minutes have a total of ";
    cout << hrs * 60 + min << " Minutes";
    return 0;
}