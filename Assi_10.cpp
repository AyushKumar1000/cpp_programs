// write the program to take 6  integers as input, store them in an array and calculate the sum of all elements in the array?

#include <iostream>
using namespace std;

int main() {
    int arr[6];   
    int sum = 0; 

 
    cout << "Enter 6 integers: ";
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 6; i++) {
        sum += arr[i];
    }

    cout << "The sum of all elements in the array is: " << sum << endl;

    return 0;
}