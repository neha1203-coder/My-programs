#include <stdio.h>
int main() {
    int a[10][10], r, c, i, j;
    int isSymmetric = 1;
    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

   
    if(r != c) {
        printf("Matrix is NOT symmetric (not a square matrix)");
        return 0;
    }

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

   
    for(i = 0; i < r; i++) {
        for(j = i + 1; j < c; j++) {
            if(a[i][j] != a[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
    }

    if(isSymmetric)
        printf("Given matrix is a Symmetric Matrix");
    else
        printf("Given matrix is NOT a Symmetric Matrix");

    return 0;
}
