#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

//* Coded By: Carlos Tabangay - BSCS-2D *//
void myIntroduction() {
    system("CLS"); // !Clear Stream
    string fName, crs, yr, sec, bday, mt;
    string e = "Please Enter Your ";

    //* Gathering Data *//
    cout << e << "Full Name: "; getline(cin, fName); system("CLS");;
    cout << e << "Course: "; getline(cin, crs); system("CLS");;
    cout << e << "Current Year: "; getline(cin, yr); system("CLS");;
    cout << e << "Section: "; getline(cin, sec); system("CLS");;
    cout << e << "Birthday: "; getline(cin, bday); system("CLS");;
    cout << e << "Motto in Life: "; getline(cin, mt); system("CLS");;

    //* Printing Information *//
    cout << "Welcome to Data Structures and Algorithms!\n\n";
    cout << "Hi I'm " << fName << ", Taking " << crs << ".\n";
    cout << "I'm currently attending as a " << yr << " Student from " << sec  << ".\n";
    cout << "My Birthday is on " << bday << " and my Motto/Motivation in life is " << "\"" << mt << "\"\n";
}

int main() {
    myIntroduction();
    return 0;
}