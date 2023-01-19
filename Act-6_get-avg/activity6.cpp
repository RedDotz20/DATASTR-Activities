#include <iostream>
using namespace std;
int main()
{
    int data, i;
    float num[10], sum=0.0, average;
    cout << "Enter the numbers of data: "; cin >> data;

    while (!(data <= 10 && data > 0)) {
        cout << "Error! number should in range of (1 to 10)." << endl;
        cout << "Enter the number again: "; cin >> data;
    }

    for(i = 0; i < data; ++i) {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i]; sum += num[i];
    }
    
    sum += num[i];
    average = sum / data;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average;

    return 0;
}