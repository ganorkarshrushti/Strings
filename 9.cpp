// to Reverse a String using For Loop( can be done by using while loop too)
#include<iostream>
#include<string.h>
using namespace std;
/*int main(){
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
}*/

//Using While loop
/*int main(){
         string str;
         int i=0,temp;
         
         cout<<"Enter a string :";
         cin>>str;
         int j = str.length() - 1;  // Calculate the length of the entered string  //j is initialized to the last character in the string
         cout<<"Enter a string :";
         while(i<j){
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            i++;
            j--;
        }
        cout << "\nReverse string : " << str<<endl;
        return 0;
}*/

/*
//Using Reverse Function
#include<algorithm>
int main(){
          string str;
          cout << "Enter a string: ";
          cin>>str;
          reverse(str.begin(),str.end());
          cout<<"Reversed string:"<<str<<endl;
          return 0;
}*/

//using function
/*
void ReverseString(char str[], int start,int end){
        if(start >= end)
            return;
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        ReverseString(str, start+1, end-1);      
}
int main(){
          char str[50];
          cout<<"Enter a string:";
          cin>>str;
          int len=strlen(str);
          ReverseString(str, 0, len-1);
          cout<<"\nReverse string:"<<str;
          return 0;
}*/


