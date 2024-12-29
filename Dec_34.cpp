#include<iostream>
#include<memory>
using namespace std;
int main(){
    int*pnt = new int;
    *pnt = 5;
    cout<<*pnt <<endl;
    //delete pnt;
    cout<<*pnt<<endl;
    cout<<"Address : "<<pnt<<endl;
    cout<<"value : "<<*pnt<<endl;
    return 0;
}