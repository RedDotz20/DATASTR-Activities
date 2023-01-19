#include <iostream>
using namespace std;

void evenNumOneToFifteen() {
    for (int i = 1; i <= 15; ++i) {
        if (i % 2 == 0) cout << i << " ";
    };
};

void oddNumOneToFifteen() {
    for (int i = 1; i <= 15; ++i) {
        if (i % 2 != 0) cout << i << " ";
    };
};

void oneToFiveTenToFifteen() {
    for (int i = 1; i <= 15; ++i) {
        if (i <= 5 || i >= 10) cout << i << " ";
    };
};

void greaterFiftyLessThanHundred() {
    for (int i = 1; i <= 100; ++i) {
        if (i > 50 && i < 100) cout << i << " ";
    };
};

int main() {
    //* RETURN Jump Statements using Void Functions

    cout << "Even Numbers from 1 to 15\n";
    evenNumOneToFifteen(); cout << "\n\n";

    cout << "Odd Numbers from 1 to 15\n";
    oddNumOneToFifteen(); cout << "\n\n";

    cout << "Numbers from 1 to 5 and 10 to 15\n";
    oneToFiveTenToFifteen(); cout << "\n\n";

    cout << "Real Numbers Greater than 50 and Less than 100\n";
    greaterFiftyLessThanHundred(); cout << "\n\n";

    return 0;
}