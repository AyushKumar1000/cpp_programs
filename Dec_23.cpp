#include<iostream>
using namespace std;
int max (int x,int y)
{
    if (x>y)
        return x;
    else
        return y;
}
int main(){
    int a,b;
    cout<<"Enter a number ";
    cin>>a;
    cout<<"Enter another number";
    cin>>b;
    int m=max(a,b);
    cout<<"Greater no is "<<m;
    return 0;
}