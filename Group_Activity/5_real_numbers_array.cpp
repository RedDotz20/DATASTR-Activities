#include <iostream>
using namespace std;

//* UNFINISHED

bool isNumeric(string str) {
   for (int i = 0; i < str.length(); i++)
      if (isdigit(str[i]) == false)
         return false; //when one non numeric value is found, return false
      return true;
}

void UserNums() {
    int value[15];   //creating array to hold values
    int count; //Loop counter
    cout << "Please enter 10 random numbers!" << endl;
    int i = 0;
    while(i < 15) {
        int value;
        cin >> value;
    }
    for (count = 0; count < 15; count++) {     
        cout << "Number " << (count + 1) << ":"; cin >> value[count];   
    }
    size_t n = sizeof(value)/sizeof(value[0]);
    for (size_t i = 0; i < n; i++) {
        cout << value[i] << ' ';
    }
}
int main() {

    int array[15];
    for (int i = 0; i < sizeof(array)/sizeof(int); ++i) {
        cout << "enter number " << i << ": ";
        int inputValue; cin >> inputValue;
        if (isdigit(inputValue) )
        array[inputValue];
    };

    for (int i = 0; i < 15; i++) {
        cout << array[i]  << " ";
    }



  //  string str;
  //  cout << "Enter a string: ";
  //  cin >> str;
  //  if (isNumeric(str))
  //     cout << "This is a Number" << endl;
  //  else
  //     cout << "This is not a number";
}