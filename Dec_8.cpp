#include<iostream>
using namespace std;
int main(){
    int number []={1,2,3,4,5,};
    cout<<"First elemnet :"<< number [0]<<endl;
    cout<<"Last element : "<<number [4]<<endl;
    number[2]=10;
    cout<<"Modified array : ";
    for (int i=0;i<5;i++)
    {
        cout<<number[i] <<" ";
    }
    cout << endl;
    return 0;
}