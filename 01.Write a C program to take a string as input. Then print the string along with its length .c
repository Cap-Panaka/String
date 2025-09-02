/*Write a C program to take a string as input. Then print the string along with its length .
Input:
Input String: Hello
Output:
Output String: Hello 5
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char c[100];
    printf("Input string: ");
    gets(c);

    int length=strlen(c);

    printf("Output String: ");
    printf("%s %d",c,length);


}

