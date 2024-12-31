#include<iostream>
using namespace std;
class student {
public:
    int rno;
    char name [50];
    double fee;
    student ();
    void display ();
};
student::student()
{
    cout<<"Enter the Roll no: ";
    cin >>rno;
    cout<<"Enter the name: ";
    cin>>name ;
    cout<<"Enter the fee: ";
    cin>>fee;
}
void student ::display()
{
    cout<<endl<<rno<<"\t"<<name <<"\t"<<fee;
}
int main(){
    student s;
    s.display();
    
    return 0;
}