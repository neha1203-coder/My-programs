#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j;
    int isUpper = 1;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(i > j && a[i][j] != 0) {
                isUpper = 0;
                break;
            }
        }
    }

    if(isUpper)
        printf("Given matrix is an upper triangular matrix");
    else
        printf("Given matrix is NOT an upper triangular matrix");

    return 0;
}
