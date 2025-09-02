/* Write a C program that will check whether two strings are the same or not.
Input:
1st String: Hello
2nd String: World
Output:
Hello and World are not the same */


#include<stdio.h>
#include <string.h>

int main()
{

    char str1[100],str2[100];
    printf("1st String: ");
    gets(str1);

    printf("2nd String: ");
    gets(str2);

    if(strcmp(str1,str2)==0)
    {
        printf("%s and %s are the same",str1,str2);
    }
    else{
        printf("%s and %s are not the same",str1,str2);
    }


}







//Without library:

#include <stdio.h>

int main()
{
    char str1[100],str2[100];
    int flag=0;

    printf("1st String: ");
    gets(str1);

    printf("2nd String: ");
    gets(str2);

    int i,len1=0,len2=0;

    for(i=0; str1[i]!='\0'; i++)
    {

        len1++;
    }
    for(i=0; str2[i]!='\0'; i++)
    {

        len2++;
    }

    if(len1!=len2)
    {

        printf("%s and %s are not the same",str1,str2);
    }

    else
    {
        for(i=0; str1[i]!='\0'; i++)
        {
            if(str1[i]!=str2[i]){
                printf("%s and %s are not the same",str1,str2);
            flag=1;
            break;
            }
            else
            {
                flag=0;
            }
        }
        if(flag==0)
            printf("%s and %s are same",str1,str2);

        }
}




