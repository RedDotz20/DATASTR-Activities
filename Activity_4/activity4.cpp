#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

string const gwa[12] = {"1.00", "1.25", "1.50", "1.75", "2.00", "2.25", "2.50", "2.75", "3.00", "4.00", "5.00", "6.00"};
string const grade[12] = {"A+", "A", "B+", "B", "B-", "C+", "C", "C-", "P", "INC", "F", "UW"};

bool range(int high, int low, int value) {
    return (value >= low && value <= high);
}

string validateGrade(int input, string currentStatus) {
    if (input >= 97) return gwa[0] + " - " + grade[0] + " - PASSED!";
    if (range(96,94,input)) return gwa[1] + " - " + grade[1] + " - PASSED!";
    if (range(93,91,input)) return gwa[2] + " - " + grade[2] + " - PASSED!";
    if (range(90,88,input)) return gwa[3] + " - " + grade[3] + " - PASSED!";
    if (range(87,85,input)) return gwa[4] + " - " + grade[4] + " - PASSED!";
    if (range(84,82,input)) return gwa[5] + " - " + grade[5] + " - PASSED!";
    if (range(81,79,input)) return gwa[6] + " - " + grade[6] + " - PASSED!";
    if (range(78,76,input)) return gwa[7] + " - " + grade[7] + " - PASSED!";
    if (input == 75) return gwa[8] + " - " + grade[8] + " PASSED";
    if (input < 75) {
        if (currentStatus == "INC") return gwa[9] + " - " + grade[9] + " - INCOMPLETE";
        if (currentStatus == "F") return gwa[10] + " - " + grade[10] + " - FAILED";
        if (currentStatus == "UW") return gwa[11] + " - " + grade[11] + " - UNAUTHORIZED WITHDRAWAL";
    }
    return "INVALID INPUT";
}

template<typename T>
void validateInput(const string customMessage, T& input) {
    cout << customMessage; cin >> input;
    while (cin.fail()) {
        cin.clear();
        cin.ignore(9999, '\n');
        cout << "--- Invalid Input Try again ---\n";
        cout << customMessage; cin >> input;
    }
};

int main(){
    bool startProgram = true;
    while(startProgram) {
        int inputGrade; string choice; system("CLS");
        validateInput("Enter your grade: ", inputGrade);

        if (inputGrade < 75 || cin.fail()) {
            string inputStatus;
            cout << "Below General Average, Please Enter your Status.\n";
            cout << "\nINC = Incomplete\nF = Failed\nUW = Unauthrorized Withdrawal\n\n";
            cout << "Enter Current Status: "; cin >> inputStatus;
            if (!(inputStatus == "INC" || inputStatus == "F" || inputStatus == "UW")) {
                cout << "INVALID INPUT PLEASE RUN THE PROGRAM AND TRY AGAIN"; return 0;
            } 
            cout << "Your Rating is " + validateGrade(inputGrade, inputStatus);
            return 0;
        } cout << "Your Rating is " + validateGrade(inputGrade, "NONE");

        cout << "\n\nRestart the Program? (y|n): "; cin >> choice;
        if (!(choice == "y" || choice == "yes")) startProgram = false;
    };
    return 0;
}