#include <iostream>
using namespace std;


int factorial(int n) {
    int result = 1; 
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers.";
    } else {
        cout << "The factorial of " << number << " is: " << factorial(number) << endl;
    }
    
    return 0;
}