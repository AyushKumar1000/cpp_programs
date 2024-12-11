#include<iostream>
using namespace std;

int main(){
    int number; 
    cout<< "Enter a number" <<endl;
    cin>>number;
    if(number>0){


        cout<<"Number is positive "<<endl;
    }
    else if(number <0){  
        cout<<"Number is negative  "<<endl;
    }
    else if(number==0){
        cout<<"Number is neutral"<<endl;
    }
    
return 0;
}