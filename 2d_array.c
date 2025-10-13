#include <stdio.h>
int main() {
    int r, c;
    printf("Enter rows and cols: ");
    scanf("%d%d", &r, &c);
    int a[r][c];
    printf("Enter elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    printf("Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
