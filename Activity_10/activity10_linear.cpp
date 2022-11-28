#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
  string name[15], query;
  int arrLength = sizeof(name) / sizeof(string);
  int nameIndex = 0, arrayIndex = 0;

  //* Input Array Values (* String *)
  for (int input = 0; input < arrLength; input++) {
    cout << "Input Name (" << input + 1 << "): ";
    getline(cin, name[input]);
  }; system("CLS");

  //* Display Names Array
  cout << "Array of Names = [ ";
  for (arrayIndex; arrayIndex < arrLength; arrayIndex++) {
    if (arrayIndex < arrLength - 1)
      cout << name[arrayIndex] << ", ";
    else
      cout << name[arrayIndex];
  };
  cout << " ]" << endl << endl;

  //* Enter Search Query
  cout << "Enter Query to Search: "; cin >> query;

  //* Execute Linear Search Algorithm
  for (nameIndex; nameIndex < arrLength; nameIndex++) {
    if ((query != name[nameIndex]) && (nameIndex == arrLength - 1)) {
      cout << "\nQuery not found"; break;
    } else if (name[nameIndex] == query) {
      cout << ("\nElement found at index ") << nameIndex << endl;
      break;
    } else {
      continue;
    }
  };
  return 0;
}