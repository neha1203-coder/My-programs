#include <stdio.h>

int stringLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

void stringConcat(char str1[], char str2[]) {
    int i = 0, j = 0;

    // Move i to end of str1
    while (str1[i] != '\0') {
        i++;
    }

    // Append str2 to str1
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

void stringCopy(char target[], char source[]) {
    int i = 0;
    while (source[i] != '\0') {
        target[i] = source[i];
        i++;
    }
    target[i] = '\0';
}

int stringCompare(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];  // difference of ASCII values
        }
        i++;
    }

    return 0; // equal
}

void stringReverse(char str[]) {
    int i = 0, j = stringLength(str) - 1;
    char temp;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

int main() {
    char str1[100], str2[100], copyStr[100];
    int choice;

    printf("Enter first string: ");
    fgets(str1, 100, stdin);

    printf("Enter second string: ");
    fgets(str2, 100, stdin);

    // Remove newline character if present
    str1[stringLength(str1) - 1] = '\0';
    str2[stringLength(str2) - 1] = '\0';

    printf("\n1. Length of Strings");
    printf("\n2. Concatenate Strings");
    printf("\n3. Copy String");
    printf("\n4. Compare Strings");
    printf("\n5. Reverse String 1");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Length of String 1 = %d\n", stringLength(str1));
            printf("Length of String 2 = %d\n", stringLength(str2));
            break;

        case 2:
            stringConcat(str1, str2);
            printf("Concatenated String = %s\n", str1);
            break;

        case 3:
            stringCopy(copyStr, str1);
            printf("Copied String = %s\n", copyStr);
            break;

        case 4:
            if (stringCompare(str1, str2) == 0)
                printf("Strings are Equal\n");
            else
                printf("Strings are Not Equal\n");
            break;

        case 5:
            stringReverse(str1);
            printf("Reversed String 1 = %s\n", str1);
            break;

        default:
            printf("Invalid Choice\n");
    }

    return 0;
}
