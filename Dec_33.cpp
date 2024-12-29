#include<iostream>

using namespace std;
int main(){
    string str, reversedstr;
    cout<<"Enter a string: ";
    getline(cin, str);
    for (int i = str.length()-1;i>=0;i--) {
        reversedstr +=str[i];
    }
    cout<<"reversed string;"<<reversedstr<<"\n";
    return 0;
}