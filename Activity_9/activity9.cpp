#include <iostream>
using namespace std;

void getStringInput() {
  string printString;
  cout << "Enter your text: "; getline(cin, printString);
  cout << "The Text you entered is: \"" << printString << "\"\n";
}

string getStringLength() {
  string inputString;
  int length = 0;
  cout << "Input a string: "; getline(cin, inputString);
  for (int i = 0; inputString[i] != '\0'; i++) length++;
  cout << "The String \"" << inputString << "\" has a length of " << length << " characters." << endl;
}

string separateIndivChar() {
  string charString;
  cout << "Enter character to separate: "; getline(cin, charString);
  for( auto character : charString ) cout << character << ' ';
  cout << endl;
}

string compareTwoString() {
  string firstString, secondString;
  cout << "Enter the first String; "; getline(cin, firstString);
  cout << "Enter the second String; "; getline(cin, secondString);
  if (firstString == secondString) cout << "Strings are EQUAL";
  else cout << "Strings are NOT EQUAL" << endl;
}

int main() {
  cout << "\n--- Printing String ---\n";
  getStringInput();

  cout << "\n--- Find String Length ---\n";
  getStringLength();

  cout << "\n--- Separate Individual Character ---\n";
  separateIndivChar();

  cout << "\n--- Compare Two spearate Strings ---\n";
  compareTwoString();
  cout << endl << endl;

  return 0;
}