#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"First elemnet :"<< arr [0]<<endl;
    cout<<"Last element : "<<arr [9]<<endl;
    
    cout<<"Modified array : ";
     for (int i=0;i<10;i++)
    {
        cout<<"Enter the elements of the array : ";
        cin>>arr[i];
    }
    arr[5]=200;
    for (int i=0;i<10;i++)
    {
        cout<<arr[i] <<" ";
    }
    
    cout << endl;
    return 0;
}
    
