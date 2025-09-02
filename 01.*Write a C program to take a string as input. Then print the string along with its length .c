/*Write a C program to take a string as input. Then print the string along with its length .
Input:
Input String: Hello
Output:
Output String: Hello 5*/

#include<stdio.h>
#include<string.h>

int main()
{
    char c[30];
    printf("Input String: ");
    gets(c);
   printf("Output String: %s %d",c,strlen(c));

}
