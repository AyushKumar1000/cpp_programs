#include<iostream>
using namespace std;
class Measure{
    public:
    int length;
    int breadth;
    
    int area;
   
    void Display(){
        cout<<"Enter the length of the room"<<endl;
        cin>>length;
        cout<<"Enter the breadth of the room"<<endl;
        cin>>breadth;
        
    }
    void measurement(){
        area=length * breadth;
        cout <<"The Area of the room is = "<<area<<endl;
        
    }
    void Dimentions(){
        cout <<"The length is = "<<length<<endl;
        cout<<"The breadth is = "<<breadth<<endl;
    }
};
int main(){
    Measure A1;
    A1.Display();
    A1.Dimentions();
    A1.measurement();
    return 0;
}