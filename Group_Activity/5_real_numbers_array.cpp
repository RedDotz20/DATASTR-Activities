//* Create a program that will accept 15 real numbers

#include <iostream>
using namespace std;

int main() {
    int array[15];
    for(int i = 0; i < 15; i++) {
        cout << "insert Element " << i << ": ";
        cin >> array[i];
    }

    cout << "Real Numbers\n";
    for(int i = 0; i < 15; i++) {
        cout  << array[i] << ' ';
    }
}