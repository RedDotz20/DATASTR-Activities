#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
  int height; system("CLS");
  cout << "Enter the number of tree level in ODD: "; cin >> height;

  if (height == 1) {
    cout << "The height of the tree doesn't have to be less than or equal to 1";
  } else if (height % 2 != 0 ) {
    system("CLS");
    for(int a = 0; a < height-7; a++) cout << " ";
    cout << "MERRY CHRISTMAS\n\n";

    for(int treeLevel = 0; treeLevel < height; treeLevel++) {
      if (treeLevel + 1 < 10) {
        for(int j = height; j > treeLevel + 1; j--) cout << " ";
      } else {
        for(int j = height; j > treeLevel + 2; j--) cout << " ";
      }

      if (treeLevel == 0) {
        cout << " " << treeLevel + 1;
      } else {
        cout << treeLevel + 1 << " ";
        if (treeLevel+1  == height) {
          if (height < 10) {
            for(int outer = 0; outer < treeLevel*2-1; outer++)
            cout << treeLevel + 1;
          } else {
            for(int outer = 0; outer < (treeLevel*2-1)/2+1; outer++)
            cout << treeLevel + 1;
          }
        } else {
          for(int k = 0; k < treeLevel*2-1; k++) cout << "*";
        }
        cout << " " << treeLevel + 1;
      } cout << endl;
    };
      
    for(int m = 0; m < height; m++) cout << " "; cout << "|\n";
    for(int m = 0; m < height; m++) cout << " "; cout << "|\n";
    for(int base = 0; base < height-4; base++) cout << " ";
    cout << "| | | | |";

  } else {
    cout << "invalid input please enter an ODD Number";
  };
  return 0;
}
