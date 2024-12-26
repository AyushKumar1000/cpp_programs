#include<iostream>
using namespace std;
int main(){
    int var =5;
    int *pointer_var =&var;
    cout<<"var"<<var<<endl;
    cout<<"*pointer_var = "<<*pointer_var<<endl
        <<endl;
    cout<<"Changing value of var to 7:"<<endl;
    var =7;
    cout<<"var"<<var<<endl;
    cout<<"*pointer_var"<<*pointer_var<<endl
        <<endl;
        


    return 0;
}