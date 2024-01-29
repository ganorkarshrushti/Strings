//to Compare Two Given Strings for Equality
#include<iostream>
#include<string.h>
using namespace std;
int main(){
        int i;
        char str1[20];
        char str2[20];
        cout<<"Enter string 1:";
        cin>>str1;
        cout<<"Enter string 2:";
        cin>>str2;
        if(strcmp (str1, str2)==0){
            cout<<"Strings are equal";

        }
        else{
            cout<<"Strings are not equal";

        }
       
        return 0;
}
