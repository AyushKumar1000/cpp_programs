#include<iostream>
using namespace std;
class identity{
    public:
    string g;
    int id;
    void printname();
    void printid()
    {
        cout<<" id is = "<<id <<endl;
    }
}; 
void identity::printname(){
    cout <<" My name is "<< g<<endl;
}

int main(){
    identity p1;
    p1.g = "Ayus";
    p1.id= 32;
    p1.printname();
    cout<<endl;
    p1.printid();



    return 0;
}