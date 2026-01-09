#include <stdio.h>
#include <math.h>

int main() {
    int a[10][10], r, c, i, j;
    int trace = 0;
    float sum = 0, norm;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);

            
            if(r == c && i == j)
                trace += a[i][j];

           
            sum += a[i][j] * a[i][j];
        }
    }
    norm = sqrt(sum);
    if(r==c){
        printf("trace of matrix is %d", trace);
    }
    else 
    printf("trace is not possible");
    printf("norms of matrix is: ", norm);
    return 0;
    
    
}

        