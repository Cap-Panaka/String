/*Write a C program to find out how many words are present in a string.
Input :
Input String: Hello World
Output:
There are 2 words. */

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int count=0;
    printf("Input String: ");
    gets(str);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ' && (i==0 || str[i-1]==' '))
        {
            count++;
        }

    }
    printf("There are %d words",count);

}
