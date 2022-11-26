#include <iostream>
using namespace std;

int main() {
  string name[15], query;
  for (int i = 0; i < 15; i++) {
    cout << "Input Name (" << i << "): "; cin >> name[i];
  };

  cout << "Enter Query to Search: "; cin >> query;

  for (int index = 0; index < sizeof(name); index++) {
    if (name[index] == query) {
      cout << query << " found at index " << index;
      break;
    } else {
      cout << "Query not found";
      break;
    };
  };

  return 0;
}