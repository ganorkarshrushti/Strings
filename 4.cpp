//to count the number of vowels, consonants, numbers, and special characters in that string
#include <iostream>

using namespace std;
int main() {
    char str[50];
    int v = 0, c = 0, n = 0, s = 0;

    cout << "Enter a string: ";
    gets(str);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')   //checks if the curr. character is one of the vowels
            ++v;
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))       //if the current character is an alphabet (lowercase or upperc)
            ++c;
        else if (str[i] >= '0' && str[i] <= '9')      //checks if current character is a digit ('0' to '9').
            ++n;
        else
            ++s;      //indicates Special charact. 
    }

    cout << "Number of vowels: " << v << endl;
    cout << "Number of consonants: " << c << endl;
    cout << "Number of numbers: " << n << endl;
    cout << "Number of special characters: " << s << endl;

    return 0;
}
