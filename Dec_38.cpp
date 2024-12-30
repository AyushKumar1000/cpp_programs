#include<iostream>
using namespace std;
class prac{
    private:
    string g;
    public:
    void setname (string name ){g = name;}
    void printname(){
        cout<<"My name is : "<<g;
    }
};
int main(){
    prac P1;
    P1.setname (" Ayush");
    P1.printname ();


    return 0;
}