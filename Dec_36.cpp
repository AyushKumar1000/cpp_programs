#include<iostream>
using namespace std;
int main(){
    int *arr, max_num,i;
    cout<<"Enter total number of elements of elements to be entered : ";
    cin>>max_num;
    arr = new int [max_num];
    cout<<"Enter the number : \n";
    for (i =0; i<max_num; i++)
    {
        cout<<"Number "<<i+1<<"is ";
        cin>>arr[i];
    
    }
    cout<<"numbers are :";
    for (i = 0; i<max_num; i++)
    {
        cout <<arr[i]<<"\t";

    }
    delete [ ]arr;

    return 0;
}