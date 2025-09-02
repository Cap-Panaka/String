
/*Write a C program to take two strings as input. Then concatenate the two strings.
Input:
1st String: Hello
2nd String: World
Output:
Concatenated String: Hello World
*/

#include<stdio.h>
#include<string.h>
int main()
{

char str1[100],str2[100];

printf("1st String: ");
gets(str1);

printf("2nd String: ");
gets(str2);

strcat(str1," ");
strcat(str1, str2);

printf("Concatenated String: ");
puts(str1);
}






//Without Library: 

/*#include<stdio.h>
int main(){
char str1[20],str2[20],flag=0;
    printf("1st string: ");
    gets(str1);

    printf("2nd string: ");
    gets(str2);

    int i,len1=0,len2=0;
    for(i=0;str1[i]!='\0';i++)
    {
        len1++;
    }
    for(i=0;str2[i]!='\0';i++)
    {
        len2++;
    }
    int j=0;
    str1[len1]=' ';
    for(i=len1+1;i<len1+len2+1;i++)
    {

        str1[i]=str2[j];
        j++;

    }
    str1[len1+len2+1]='\0';
    printf("\nConcatenated String: : ");
    puts(str1);
}*/



