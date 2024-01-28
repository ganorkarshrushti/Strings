//to Read a String and Find the Sum of all Digits in the String
#include<stdio.h>
void main(){
        char string[20];
        int count;
        int nc=0;    //count of number of digits in the array
        int sum=0;
        printf("Enter string containing both digits & alphabets\n");
        scanf("%s",string);
        for(count=0; string[count]!='\0'; count++){
            if((string[count]>='0') && (string[count]<='9'))   //If the character is in the range '0' to '9', it means it is a digit, and the code inside the if block is executed.
            {
                    nc += 1;        //increments the count of digits (nc) each time a digit is encount
                    sum+= (string[count]-'0');         //calculates the sum of digits

            }
        }
        printf("No. of digits in string=%d\n",nc);
        printf("Sum of all digits=%d\n",sum);
    
}