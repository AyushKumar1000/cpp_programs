#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string greeting = "hello World";
    cout<<greeting<<endl;
    string name;

    cout<<"enter your name : ";
    cin>>name ;
    cout<<name<<endl;

    int length=greeting.length();
    cout <<length<<endl;

    string firstname="hi Ayush";
    string lastname="how are you";
    string fullname= firstname +""+lastname ;
    cout<<fullname <<endl;
    string base ="Hello";
    cout<<base<<endl;
    base.append("Hello World");
    cout<<base<<endl;

    string str1="Apple";
    string str2="Banana";
    
    if (str1==str2)
    {
        cout <<"string are equal"<<endl;
    }
    else 
    {
        cout<<"string are not equal"<<endl;
    }
    int result= str1.compare(str2);
    if (result==0)
    {
        cout<<"String are equal"<<endl;
    }
    else if (result<0)
    {
        cout<<"str1 comes before str2"<<endl;
    }
    string text="Hello World";
    cout<<text<<endl;
    string sub=text.substr(0,5);
    cout<<sub<<endl;
    return 0;
}