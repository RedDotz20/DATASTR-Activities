#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int array[20],pos,neg,odd,even;

  for(int h = 0; h < 20; h++) {
    cout << "insert Value " << h << ": ";
    cin >> array[h];
  }

  // Count Numbers
  for(int i = 0; i < sizeof(array)/4; i++) {
    if(array[i] < 0 && array[i] % 2 == 0) {
      neg+1; even+1;
    } else if(array[i] < 0 && array[i] % 2 != 0) {
      neg+1; odd+1;
    } else if(array[i] > 0 && array[i] % 2 == 0) {
      pos+1; even+1;
    } else if(array[i] > 0 && array[i] % 2 != 0) {
      pos+1; odd+1;
    }
  }

  // Assign Numbers
  int arrPos[pos], arrNeg[neg], arrOdd[odd], arrEven[even];

  for(int j = 0; j < sizeof(array)/4; j++) {
    if(array[j] < 0 && array[j] % 2 == 0) {
      arrNeg[j] = array[j]; arrEven[j] = array[j];
    } else if(array[j] < 0 && array[j] % 2 != 0) {
      arrNeg[j] = array[j]; arrOdd[j] = array[j];
    } else if(array[j] > 0 && array[j] % 2 == 0) {
      arrPos[j] = array[j]; arrEven[j] = array[j];
    } else if(array[j] > 0 && array[j] % 2 != 0) {
      arrPos[j] = array[j]; arrOdd[j] = array[j];
    }
  }

  for(int k = 0; k < sizeof(arrPos)/4 ; k++) {
    cout  << arrPos[k] << ' ';
  }

  for(int l = 0; l < sizeof(arrNeg)/4; l++) {
    cout  << arrNeg[l] << ' ';
  }

  for(int m = 0; m < sizeof(arrEven)/4; m++) {
    cout  << arrEven[m] << ' ';
  }

  for(int n = 0; n < sizeof(arrEven)/4; n++) {
    cout  << arrOdd[n] << ' ';
  }
  return 0;
}