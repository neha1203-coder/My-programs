#include <stdio.h>

int main() {
    printf("kartikey tiwari roll no -20\n");
    int n;
    printf("Enter an odd number (>3): ");
    if (scanf("%d", &n) != 1) return 0;  

    if (n <= 3 || n % 2 == 0) {
        printf("Please enter an odd number greater than 3.\n");
        return 0;
    }

    int r, i;
    // Upper part: r = n, n-2, ..., 1
    for (r = n; r >= 1; r -= 2) {
        int left_spaces = (n - r) / 2;
        // print left padding (each 'slot' uses 2 characters to align with "* ")
        for (i = 0; i < left_spaces; ++i) printf("  ");
        // print r stars separated by a space
        for (i = 0; i < r; ++i) {
            printf("*");
            if (i < r-1) printf(" ");
        }
        printf("\n");
    }

    // Lower part: r = 3, 5, ..., n (skip the center 1 because it's already printed)
    for (r = 3; r <= n; r += 2) {
        int left_spaces = (n - r) / 2;
        for (i = 0; i < left_spaces; ++i) printf("  ");
        for (i = 0; i < r; ++i) {
            printf("*");
            if (i < r-1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
