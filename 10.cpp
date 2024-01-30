//to Find if a String is Palindrome.
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
/*
int main() {
    string str;

    cout << "Enter a string: ";
    cin>>str;

    string reversedstr =  str;
    reverse(reversedstr.begin(), reversedstr.end());

    if ( str == reversedstr) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}*/

//Using Function
void PallindromeString(string str){

    string reversedstr =  str;
    reverse(reversedstr.begin(), reversedstr.end());

    if ( str == reversedstr) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

}
int main(){
        string str;

        cout << "Enter a string: ";
        cin>>str;
        PallindromeString( str);

        return 0;
}


