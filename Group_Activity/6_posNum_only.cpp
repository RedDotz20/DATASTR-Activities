#include <iostream>
using namespace std;

int main(){
  int array[15];

  int i = 0, number;
  while(i < 15) { 
    jump: cout << "Please enter a number "; cin >> number;
    if(number < 0) goto jump;
    array[i] = number; i++;
  }

  for(int i = 0; i < 15; i++) {
    cout  << array[i] << ' ';
  }
  return 0;
}