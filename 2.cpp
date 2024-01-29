//to Find the Length of a String
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str[20];
    int len;
    cout<<"Enter an string:";
    cin>>str;
    len=strlen(str);
    cout<<"Length of string is:"<<len;
    return 0;
}