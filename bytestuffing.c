#include <stdio.h>

int main() {
    int n;
    
    // Step 1: Input the number of bits
    printf("Enter number of bits: ");
    scanf("%d", &n);

    int arr[100], stuffed[200]; // Original and stuffed arrays

    // Step 2: Input the bit sequence (0s and 1s)
    printf("Enter the bits (0s and 1s): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0; // Counter for consecutive 1s
    int j = 0;     // Index for stuffed array

    // Step 3: Traverse through each bit
    for (int i = 0; i < n; i++) {
        stuffed[j++] = arr[i];  // Copy the current bit to stuffed array

        if (arr[i] == 1) {
            count++;            // Increment count for 1s
            // Step 4: If there are 5 consecutive 1s, insert a 0
            if (count == 5) {
                stuffed[j++] = 0;  // Insert stuffed bit (0)
                count = 0;         // Reset counter
            }
        } else {
            count = 0;          // Reset count if current bit is 0
        }
    }

    // Step 5: Print the stuffed bit sequence
    printf("Stuffed bits: ");
    for (int i = 0; i < j; i++) {
        printf("%d ", stuffed[i]);
    }

    printf("\n");

    return 0;
}
