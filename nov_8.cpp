#include <iostream>
using namespace std;
int main(){
    // for loop 
    // syntax for for loop 
    // for (intilization;codition;upation)
    // loop body (c++ code )
    for (int num1=0;num1<4;num1++){
       cout<<num1<<endl;
    }
    // while loop
    // syntax for while loop
    // while (condition)
    // {
    // c++ statements 
    // }
    int x= 1;
    while (x <=10 ){
        cout <<x<<endl;
        x++;
        if (x==4)
        break;
    }
    // do while loop
    // syntax for do while loop 
    // do {
    //  c++ statement ;
    // } while (condition);
    int i = 1;
    do{
        cout<<i<<endl;
        i++;
    }while (i<=10);
 
    return 0;

}