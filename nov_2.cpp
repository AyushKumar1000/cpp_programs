#include<iostream>
using namespace std;

int main(){
    int age; 
    cout<< "Write your age" <<endl;
    cin>>age;
    if((age<18) && (age<=0)){
        cout<<"you are not eligble for voting"<<endl;
    }
    else if(age>=18){  
        cout<<"you are just eligble for voting  "<<endl;
    }

    
return 0;
}