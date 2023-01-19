#include <iostream>
using namespace std;

int main() {
  cout << "-----Number 1-------------------------------------\n\n";

  int arr[10], newArr[10];
  string oddNumbers = "";
  string evenNumbers = "";

  for (int i = 0; i < 10; i++) {
    cout << "Enter Input (" << i+1 << "): ";
    cin >> arr[i];
  }
  
  for (int i = 0; i < 10; i++) {
    newArr[i] = arr[i];
    if (newArr[i] % 2 != 0) {
      oddNumbers += to_string(newArr[i]) + " ";
    } else {
      evenNumbers += to_string(newArr[i]) + " ";
    }
  }

  if (oddNumbers == "") {
    cout << "\nOdd Numbers: NONE";
  } else {
    cout << "\nOdd Numbers: " << oddNumbers << "\n";
  }

  if (evenNumbers == "") {
    cout << "Even Numbers: NONE";
  } else {
    cout << "Even Numbers: " << evenNumbers << "\n\n";
  }

  cout << "\n\n-----Number 2-------------------------------------\n\n";


  int num[10], i, b[10], j=0, count=0;
    printf("Enter any 10 array elements: \n");
    for(i=0; i<10; i++)
        scanf("%d", &num[i]);
    for(i=0; i<10; i++)
    {
        if(num[i]%2==0)
        {
            b[j] = num[i];
            count++;
            j++;
        }
    }
    printf("\n\nEven elements are: ");
    for(i=0; i<count; i++)
    {
        if(i==(count-1))
            printf("%d", b[i]);
        else
            printf("%d, ", b[i]);
    }
  return 0;
}