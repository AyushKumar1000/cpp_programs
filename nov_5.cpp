#include <iostream>
using namespace std;
int main(){
    double num1, num2 ,num3;
    cout<<"Enter the the first number";
    cin >>num1;
    cout<<"Enter the the second number";
    cin >>num2;
    
    if (num1>num2){
        cout<<"Here num1 is the greatest";
    }
    else if (num2>num1){
        cout<<"Here num2 is the greatest";
    }

    
    else if (num1==num2){
        cout<<"Here all the numbers are equal";
    }
    return 0;

}