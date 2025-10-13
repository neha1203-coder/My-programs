#include <stdio.h>
#include <ctype.h>
int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, others = 0;
    printf("Enter a string: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            char ch = tolower(str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        } else if (isdigit(str[i]))
            digits++;
        else if (isspace(str[i]))
            spaces++;
        else
            others++;
    }
    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nSpaces: %d\nOthers: %d",
           vowels, consonants, digits, spaces, others);
    return 0;
}
