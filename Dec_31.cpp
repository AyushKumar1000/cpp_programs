//create function using pointers
#include<iostream>
using namespace std;
void display (int *a )
{
    cout<<"value of a is"<<a<<endl;

}
int main(){
    int num = 10;
    display(&num);
    return 0;
}