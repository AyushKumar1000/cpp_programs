#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str1[10]="Hello";
    char str2[10]="world";
    char str3[10];
    int len;
    strcpy(str3,str1);
    cout<<"Strcpy(str3,str1):"<<str3<<endl;
    strcat(str1,str2);
    cout<<"strcat(str2,str3)";

    return 0;
}