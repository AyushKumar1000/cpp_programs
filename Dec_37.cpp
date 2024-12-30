#include<iostream>
using namespace std;
class Person{
    public:
    string name ;
    int age;
    void introduce()
    {
        cout <<"hi, my name is "<<name <<" and I am "
             <<age <<"years old."<<endl;
    }
};
int main(){
    Person N1;
    N1.name = "Ayus";
    N1.age = 19;
    N1.introduce();


    return 0;
}