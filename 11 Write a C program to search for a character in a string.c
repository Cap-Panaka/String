/* Write a C program to search for a character in a string.
Sample Input:
Enter String: Hello World
Enter character to search : W
Sample Output:
W is present in the string. */

#include <stdio.h>
int main() {
    char str[100];
    char ch;
    int found = 0;

    printf("Enter String: ");
    gets(str);

    printf("Enter character to search: ");
    scanf("%c", &ch);

    for(int i=0;str[i]!='\0';i++) {
        if(str[i]==ch) {
            found=1;
            break;
        }
    }

    if(found==0)
        printf("%c is not present in the string.\n",ch);
    else
        printf("%c is present in the string.",ch);

}
