#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for (int i=0;i<5;i++)
    {
        cout<<"Enter the elements of the array : ";
        cin>>arr[i];
    }
    cout <<"The Elements of the array are :";
    for (int i=0;i<5;i++)
    {
        cout <<arr[i]<<", ";
    }

    return 0;
}