/*Write a C program to find out whether a string is pallindrome or not.
Sample Input :
Input String: EYE
Sample Output:
Reverse of the string : EYE
EYE is a pallindrome
*/

#include <stdio.h>

int main() {
    char str[100];
    int len = 0;

    printf("Input String: ");
    gets(str);
    for(len = 0; str[len] != '\0'; len++);

    int isPalindrome = 1;
    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("%s is a palindrome\n", str);
    else
        printf("%s is NOT a palindrome\n", str);

}





//Using Library:
/*
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Input String: ");
    gets(str);

    int len = strlen(str);
    int isPalindrome = 0;

    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            isPalindrome = 1;
            break;
        }
    }

    if(isPalindrome==0)
        printf("%s is a palindrome\n", str);
    else
        printf("%s is NOT a palindrome\n", str);

}*/



