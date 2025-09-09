/*Write a program in C that will reverse a string.
Input :
Input String: Hello
Output:
Output String: olleH */



#include<stdio.h>
#include <string.h>

int main()
{

    char str[100];
    printf("Input String: ");
    gets(str);

    strrev(str);

    printf("Output String: ");
    puts(str);
}



//Without Library: 
/*
#include <stdio.h>
int main()
{

    char c[100];
    printf("Input String: ");
    gets(c);

    int len=0,i;

    for(i=0;c[i]!='\0';i++)
    {
        len++;
    }

    printf("Output: ");

    for(i=len-1;i>=0;i--)
    {

        printf("%c",c[i]);
    }
}


*/
