#include <stdio.h>

#define ROW 10
#define COL 10

int main() {
    int arr[ROW][COL];
    int r, c, i, j, choice;
    int row, col, value, found = 0;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("\nEnter elements of 2D array:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    do {
        printf("\n---- 2D Array Operations ----\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nArray elements are:\n");
                for(i = 0; i < r; i++) {
                    for(j = 0; j < c; j++) {
                        printf("%d\t", arr[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                printf("Enter position to insert (row and column): ");
                scanf("%d%d", &row, &col);
                if(row >= 0 && row < r && col >= 0 && col < c) {
                    printf("Enter value to insert: ");
                    scanf("%d", &value);
                    arr[row][col] = value;
                    printf("Element inserted successfully!\n");
                } else {
                    printf("Invalid position!\n");
                }
                break;

            case 3:
                printf("Enter position to delete (row and column): ");
                scanf("%d%d", &row, &col);
                if(row >= 0 && row < r && col >= 0 && col < c) {
                    arr[row][col] = 0;  // setting to 0 to mark deletion
                    printf("Element deleted successfully!\n");
                } else {
                    printf("Invalid position!\n");
                }
                break;

            case 4:
                printf("Enter element to search: ");
                scanf("%d", &value);
                found = 0;
                for(i = 0; i < r; i++) {
                    for(j = 0; j < c; j++) {
                        if(arr[i][j] == value) {
                            printf("Element found at position (%d, %d)\n", i, j);
                            found = 1;
                        }
                    }
                }
                if(!found)
                    printf("Element not found!\n");
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 5);

    return 0;
}
