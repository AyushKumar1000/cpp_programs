//write a program to take 6 intigers as inegers as input , store them it an array and calculate the sum  of all the elements in the array

#include <iostream>
using namespace std;

int main() {
    int arr[8];  
    int evenCount = 0, oddCount = 0;  

 
    cout << "Enter 8 numbers: ";
    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
    }
 
    for (int i = 0; i < 8; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;  
        } else {
            oddCount++;  
        }
    }
 
    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;

    return 0;
}