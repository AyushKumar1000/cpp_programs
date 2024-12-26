#include<iostream>
using namespace std;
void demonstration_pointer ()
{
    int var=20;
    int*ptr;
    ptr=&var;
    cout <<"value at ptr "<<ptr<<endl;
    cout<<"value ot var"<<var<<endl;
    cout<<"value of *ptr"<<*ptr<<endl;
}
int main(){
    demonstration_pointer();
    return 0;
}