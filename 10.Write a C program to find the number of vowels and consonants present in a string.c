//Write a C program to find the number of vowels and consonants present in a string.

#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Input String: ");
    gets(str);

    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
                vowels++;
        }
        else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d", consonants);
}
