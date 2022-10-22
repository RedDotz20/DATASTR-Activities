#include <iostream>
#include <iomanip>
using namespace std;

//* Create a program that will accept 15 real numbers

int arr[15];

int validateRealNum() {
    int num = 0;
    cout << "Enter Input: ";
    cin >> setw(1) >> num; arr[num];

    //error check
    while(!cin.good()) {
        cout << "Error Invalid Input Try Again" << endl;

        //clear stream
        cin.clear();
        cin.ignore(INT8_MAX, '\n');

        //get input again
        cout << "Enter Input: ";
        cin >> setw(1) >> num;
        arr[num];
    }

    //clear stream
    cin.clear();
    cin.ignore(INT8_MAX, '\n');

    return num;
}

int main() {
    for(int i = 0; i < 15; i++) {
        int num = 0;
        num = validateRealNum();
    }
    cout << arr[0];
}