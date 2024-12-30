#include<iostream>
using namespace std;
class Measure{
    public:
    int length;
    int breadth;
    int hight;
    int area;
    int volume;
    void read(){
        cout<<"Enter the length of the room"<<endl;
        cin>>length;
        cout<<"Enter the breadth of the room"<<endl;
        cin>>breadth;
        cout<<"Enter the hight of the room"<<endl;
        cin>>hight;
    }
    void measurement(){
        area=length * breadth;
        cout <<"The Area of the room is = "<<area<<endl;
        volume=length*breadth*hight;
        cout<<"The Volume of the room is = "<<volume<<endl;
    }
   

    
};
int main(){
    Measure A1;
    A1.read();
    A1.measurement();
    return 0;
}