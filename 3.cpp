// to Find the Number of Words in a Given Sentence
#include<iostream>
#include<string.h>
using namespace std;
int main(){
        char str[50];
        int count=0,i;
        cout<<"Enter the string :";
        cin>>str;
        for( i=0;  str[i]!='\0'; i++){
            if(str[i] == ' ')
                count++ ;
        }
        cout<<"Number of words in the string are:" << count+1;
        return 0;
}

        
        