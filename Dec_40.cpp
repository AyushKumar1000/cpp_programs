#include<iostream>
using namespace std;
class AdditionClass{
    public:
    int num1;
    int num2;
    int result;
    void read(){
        cout<<"Enter the first number"<<endl;
        cin>>num1;
        cout<<"Enter the second number"<<endl;
        cin>>num2;

    }
    void sum(){
        result=num1+num2;
        cout<<"The sum is "<<result<<endl;
    }
    void print(){
        cout<<"Result is "<<result<<endl;
    }
        
    
};
int main(){
    AdditionClass obj1;
    AdditionClass obj2;
    obj1.read();
    obj2.read();
    obj1.sum();
    obj2.sum();
    obj1.print();
    obj2.print();

    return 0;
} 