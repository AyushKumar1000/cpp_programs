#include <iostream>
using namespace std;
int main(){
    double Grade;
    cout<<"Enter your Grade";
    cin >>Grade;
    if (Grade >= 90){
        cout << "A+";
    } 
    else if (Grade >=80){
        cout <<"A";
    }
    else if (Grade >=70){
        cout <<"B+";
    }
    else if (Grade >=60){
        cout <<"B";
    }
    else if (Grade >=50){
        cout <<"C";
    }
    else if (Grade >=40){
        cout <<"D";
    }
    else if (Grade >=30){
        cout <<"E";
    }
    else {
        cout<<"Fail";

    }




    

    return 0;

}