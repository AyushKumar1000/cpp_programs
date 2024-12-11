//write a C++ program to calculate the sum of all even numbers and the product of all the odd number between 1 and n.

#include<iostream>
using namespace std;
class Addition{
    public :
    int n;
    void Even (){
        cout <<"Enter the number of even number :"<<endl;
        cin>>n;
    }
    void sum(){
        int sum=0;
        for (int i=1;i<=n;i++){
            if (i%2==0){
                sum+=i;
            }
        }
        cout<<"The sum of even number is :"<<sum<<endl;
    }
    void Odd (){
        cout<<"Enter the number of odd numbers :"<<endl;
        cin>>n;
    }
    void Sum(){
        int Sum=0;
        for (int i=1;i<=n;i++){
            if (i%2!=0){
                Sum+=i;
            }
        }
        cout<<"The sum of odd number is :"<<Sum<<endl;
    }
    

};
int main(){
    Addition obj1;
    Addition obj2;
    obj1.Even();
    obj1.sum();
    obj2.Odd();
    obj2.Sum();

    return 0;
}