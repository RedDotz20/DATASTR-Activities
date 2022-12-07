#include <iostream>
#include <stdlib.h>
using namespace std;

void giftSpace(int space) {
  for(int i=0; i < space-2; i++) cout << " -";
}

void middle(int mid) {
  for(int i=0; i <mid-1; i++) cout << "1 ";
}

void topAndBottom(int num) {
  for(int i=0; i < (num-1)*2+1; i++) cout << num << " ";
}

int main() {
  int size; system("CLS");
  cout << "Enter the number of gift size in ODD: "; cin >> size;

  if (size == 1) {
    cout << "The size of the gift doesn't have to be less than or equal to 1";
  } else if (size % 2 != 0 ) {
    system("CLS"); cout << "MERRY CHRISTMAS\n\n";

    topAndBottom(size); cout << endl;
    
    for(int i = size-2; i > 0; i--) {
      cout << i+1; giftSpace(size); cout << " " << i+1;
      giftSpace(size); cout << " " << i+1 << endl;
    }

    middle(size); cout << "* "; middle(size); cout << endl;

    for(int i = 0; i < size-2; i++) {
      cout << i+2; giftSpace(size); cout << " " << i+2;
      giftSpace(size); cout << " " << i+2 << endl;
    }
    topAndBottom(size); cout << endl;
  } else {
    cout << "invalid input please enter an ODD Number";
  }
  return 0;
}