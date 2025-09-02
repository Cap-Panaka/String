/*Write a C program to take a string as input. Then convert each character of the string to uppercase.
Input:
Input String: Hello World
Output:
Output String: HELLO WORLD */

#include <stdio.h>
int main()
{

    char str[100];
    printf("Input: ");
    gets(str);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {

            str[i]=str[i]-32;
        }
    }

    printf("Output String: ");
    puts(str);
}
