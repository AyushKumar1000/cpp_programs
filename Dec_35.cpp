#include<iostream>
using namespace std;
int main(){
    int*pnt = new int;
    cout<<"Enter the first number"<<endl;
    cin>>*pnt;
     int *pnt1 = new int;
     cout<<"Enter the second number"<<endl;
     cin>>*pnt1;
    int *result = new int;
    *result = (*pnt + *pnt1);
    cout<<"Sum of pointer variable"<<endl<<*result;
    
    return 0;
}