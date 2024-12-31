//constructor and prametrized constructor
#include<iostream>
using namespace std;
class abc
{
    public:
    int id ;
    abc()
    {
        cout<<"Defalt cinstructor called"<<endl;
        id=-1;
    }
    abc(int x)
    {
        cout <<"Parametrized constructor called"<<endl;
        id=x;
    }
};
int main(){
    abc obj1;
    cout<<"id is = "<<obj1.id<<endl;
    abc obj2(21);
    cout<<"id is = "<<obj2.id<<endl;
    return 0;
}