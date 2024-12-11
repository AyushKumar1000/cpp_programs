#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout <<  "Enter the value of a"<<endl;
    cin >> a ;
    cout << "Enter the value of b"<<endl;
    cin >> b;

    

    cout<<"OPERATORS IN C++:"<<endl;
    cout<<"FOLLOWING ARE THE OPERATORS IN C++"<<endl;
    // Arathatic operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"the value of a * b is "<<a*b<<endl;
    cout<<"the value of a / b is "<<a/b<<endl;
    cout<<"the value of a % b is "<<a%b<<endl;
    cout<<"the value of a ++ is "<<a++<<endl;
    cout<<"the value of a -- is "<<a--<<endl;
    cout<<"the value of ++a is "<<++a<<endl;
    cout<<"the value of --a is "<<--a<<endl;
    // Asignment operators -->  it is used to asign values to variables
    // int a=3, b=5, char d= 'd';
    // comparison operators
    cout<<"Following are the types of comparison operators in c++"<<endl;
    cout<<"the value of a == b is "<<(a==b)<<endl;
    cout<<"the value of a != b is "<<(a!=b)<<endl;
    cout<<"the value of a >= b is "<<(a>=b)<<endl;
    cout<<"the value of a <= b is "<<(a<=b)<<endl;
    cout<<"the value of a > b is "<<(a>b)<<endl;
    cout<<"the value of a < b is "<<(a<b)<<endl;
    // 0 dikhaye to false and 1 dikhaye to true
    //logical operator
    cout<<"the value of logical and operator ((a == b)&&(a>b)) is "<<((a==b)&&(a>b))<<endl;
    cout<<"the value of logical or operator ((a == b)||(a>b)) is "<<((a==b)||(a>b))<<endl;
    cout<<"the value of logical not operator (!(a == b)) is "<<(!(a == b))<<endl;

    return 0;
}