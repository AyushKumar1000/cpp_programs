//multilevel inheritance
#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"This animal can eat."<<endl;
    }
};


class Mammal: public Animal{
    public :
    void walk(){
        cout<<"These animal can walk"<<endl;
    }



};
class Whale :public Animal{
    public:
    void big(){
        cout<<" these animal are big "<<endl;
    }
};

//class Dog : public mammal{
  //  public :
    //void bark(){
      //  cout<<"These animal can bark"<<endl;
    
   // }
//};
int main(){
    Mammal obj1;
    Whale obj;

    obj1.eat();
    obj1.walk();
    //dog.bark();
    obj.eat();
    obj.big();
        return 0;
}
