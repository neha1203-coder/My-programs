#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[200];
    int choice;

    printf("Enter first string: ");
    gets(str1);  // Note: gets() is unsafe, use fgets() in real programs
    printf("Enter second string: ");
    gets(str2);

    do {
        printf("\n--- STRING OPERATIONS ---\n");
        printf("1. String Length\n");
        printf("2. String Copy\n");
        printf("3. String Concatenation\n");
        printf("4. String Comparison\n");
        printf("5. String Reverse\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // to clear newline from buffer

        switch (choice) {
            case 1:
                printf("Length of first string: %lu\n", strlen(str1));
                printf("Length of second string: %lu\n", strlen(str2));
                break;

            case 2:
                strcpy(str3, str1);
                printf("After copying first string into third: %s\n", str3);
                break;

            case 3:
                strcpy(str3, str1);
                strcat(str3, str2);
                printf("After concatenation: %s\n", str3);
                break;

            case 4:
                if (strcmp(str1, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;

            case 5:
                strcpy(str3, str1);
                strrev(str3);  // works in some compilers like Turbo C; use manual reverse for GCC
                printf("Reverse of first string: %s\n", str3);
                break;

            case 6:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 6);

    return 0;
}
