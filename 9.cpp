// to Reverse a String using For Loop
#include<iostream>
#include<string.h>
using namespace std;
int main(){
         char str[20];
         int i,j,temp;
         cout<<"ENter a string :";
         cin>>str;
         j=strlen(str)-1;
         for(i=0; i<j; i++,j--){
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
         }
         cout<<"\n Reverse String:"<<str;
         return 0;
}

         