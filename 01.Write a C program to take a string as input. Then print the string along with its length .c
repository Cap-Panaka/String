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


/* Without library:

#include<stdio.h>
#include <string.h>
int main()

{
    char c[100];
    printf("Input String: ");
    gets(c);

    int i,len=0;
    for(i=0;c[i]!='\0';i++)
    {
        len++;
    }
    printf("Output String: %s %d",c,strlen(c));

} */

