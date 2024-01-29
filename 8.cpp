//To Remove Specific Character from the String
#include<iostream>
#include<string.h>
#include <algorithm>
using namespace std;

int main(){
       string s;
       char c;
       cout<<"Enter a string:";
       cin>>s;
       cout<<"\nEnter the character:";
       cin>>c;
       s.erase(remove(s.begin(), s.end(),c), s.end());
       cout<<"String after removing the character"<<c<<":"<<s;
}    