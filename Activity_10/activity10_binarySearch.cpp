#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

//* Binary Search Algorithm
int binarySearchString(string names[], string query, int length) {
  int lower = 0, upper = length - 1;
  while (lower <= upper) {
    int mid = lower + (upper - lower) / 2, result;
    if (query == (names[mid]))
      result = 0;
    if (result == 0)
      return mid;
    if (query > (names[mid]))
      lower = mid + 1;
    else
      upper = mid - 1;
  }
  return -1;
}

//* Sort Comparator
bool comparator(string a, string b) {
  return a < b;
}

int main () {
  string names[15], query;
  int arrLength = sizeof(names) / sizeof(string);
  int input = 0, arrayIndex = 0;

  //* Input Array Values (Name: <String>)
  for (input; input < arrLength; input++) {
    cout << "Input Name (" << input + 1 << "): ";
    getline(cin, names[input]);
  }; system("CLS");

  //* Sort Array String Values
  sort(names, names + arrLength, comparator);

  //* Display Sorted Array
  cout << "Array of Names = [ ";
  for (arrayIndex; arrayIndex < arrLength; arrayIndex++) {
    if (arrayIndex < arrLength - 1)
      cout << names[arrayIndex] << ", ";
    else
      cout << names[arrayIndex];
  };
  cout << " ]" << endl << endl;

  //* Enter Search Query
  cout << "Enter Query to Search: "; cin >> query;

  //* Execute Binary Search Algorithm
  int resultIndex = binarySearchString(names, query, arrLength);
  
  //* Display Searched Index
  if (resultIndex == -1)
    cout<<("\nElement not present\n\n");
  else
    cout<<("\nElement found at index ") << resultIndex << endl;
}