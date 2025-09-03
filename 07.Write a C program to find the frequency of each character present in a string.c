/*Write a C program to find the frequency of each character present in a string.
Input :
Input String: hello
Output:
e appears 2 time(s).
h appears 1 time(s).
l appears 2 times(s).
o appears 1 time(s) */
#include <stdio.h>

int main()
{
   char str[100];
   printf("Input String: ");
   gets(str);
   printf("Output\n");
   int count=0;
   for(int i=0;str[i]!='\0';i++)
   {
       if(str[i]=='0')
       {
        continue;
       }
       count=1;

       for(int j=i+1;str[j]!='\0';j++)
       {
           if(str[i]==str[j])
           {

               count++;
               str[j]='0';
           }
       }
       printf("%c appears %d time(s)\n",str[i],count);

   }
}
