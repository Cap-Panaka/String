/*Write a C program to find out if a string is a substring of another string or not.
Input :
Input String1: Hello World
Input String2: orl
Output:
orl is a substring of Hello World
*/
#include<stdio.h>
int main()
{

    char str1[100],str2[100];
    int found=0;

    printf("Input String1: ");
    gets(str1);

    printf("Input String2: ");
    gets(str2);
    int i,j;
    for( i=0;str1[i]!='\0';i++)
    {
        for(j=0;str2[j]!='\0';j++)
        {

            if(str1[i+j]!=str2[j])
                break;
        }
        if(str2[j]=='\0')
        {

            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("%s is NOT a substring of %s",str2,str1);
    }
    else
    {

        printf("%s is a substring of %s",str2,str1);
    }
}












//Using Library:
/*#include<stdio.h>
#include<string.h>

int main()
{

    char str1[100],str2[100];

    printf("Input String1: ");
    gets(str1);

    printf("Input String2: ");
    gets(str2);

    if(strstr(str1,str2)!= 0)
    {

        printf("%s is a substring of %s\n",str2,str1);
    }
    else
    {

        printf("%s is Not a substring of %s\n",str2,str1);
    }
} */
