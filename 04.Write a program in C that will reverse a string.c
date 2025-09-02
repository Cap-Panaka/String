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
#include<stdio.h>
#include<string.h>

int main()
{

    char str[100];
    printf("Input String: ");
    gets(str);

    int len=strlen(str);

    for(int i=0;i<len/2;i++)
    {

        char temp =str[i];
        str[i]=str[len -1-i];
        str[len-1-i]=temp;
    }

    printf("Output String: ");
    puts(str);

}

*/
