/*#include<iostream>
#include<string.h>
using namespace std;
int main(){
        string str1;
        string str2;
        int i;
        cout<<"Enter string 1:";
        cin>>str1;
        cout<<"Enter string 2:";
        cin>>str2;
        string concat=str1 +str2 ;
        cout << "Concatenated String : " <<concat;
        return 0;
}*/
//Another method using strcat function:
//strcat works with C character arrays, 
#include<iostream>
#include<string.h>
using namespace std;
int main(){
        char str1[20];
        char str2[20];
        int i;
        cout<<"Enter string 1:";
        cin>>str1;
        cout<<"Enter string 2:";
        cin>>str2;
        strcat(str1, str2);
        cout<<"Concatenated string :"<<str1;
        return 0;
}