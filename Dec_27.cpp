#include<iostream>
using namespace std;
int main(){
    int var = 5;
    int *point_var =&var;
    cout<<"var = "<<var<<endl;
    cout<<"Address of var (&var) = "<<&var<<endl
        <<endl;
    cout<<"point_var = "<<point_var<<endl;
    cout<<"content of the address pointed to buy point_var(*point_var) = "<<*point_var<<endl;

    return 0;
}