//copy constructors
#include<iostream>
using namespace std;
class Sample 
{
public:
    int id;
    Sample(){}
    Sample (int x){id =x;}
    Sample(Sample& t){id = t.id;}
    void display (){cout<<"Id = "<<id ;}

};
int main(){
    Sample obj1(10);
    obj1.display();
    cout<<endl;
    Sample obj2(obj1);
    obj2.display(); 
    return 0;
}