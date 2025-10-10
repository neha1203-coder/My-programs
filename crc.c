#include <stdio.h>
#include <string.h>

#define MAX 50

// Function to perform mod-2 division
void divide(int dividend[], int divisor[], int m, int n) {
    for (int i = 0; i <= m - n; i++) {
        if (dividend[i] == 1) {  // Only divide if leading bit is 1
            for (int j = 0; j < n; j++)
                dividend[i + j] ^= divisor[j];  // XOR operation
        }
    }
}

int main() {
    // Original bit stream
    int data[] = {1,0,0,1,1,1,0,1};
    int generator[] = {1,0,0,1}; // x^3 + 1
    int m = sizeof(data)/sizeof(data[0]);
    int n = sizeof(generator)/sizeof(generator[0]);

    // Step 1: Append n-1 zeros
    int augmented[MAX];
    for (int i = 0; i < m; i++)
        augmented[i] = data[i];
    for (int i = 0; i < n-1; i++)
        augmented[m + i] = 0;

    // Step 2: Copy augmented array for division
    int temp[MAX];
    memcpy(temp, augmented, (m + n - 1) * sizeof(int));

    // Step 3: Divide by generator
    divide(temp, generator, m + n - 1, n);

    // Step 4: The last (n-1) bits are the CRC remainder at sender
    int remainder[MAX];
    for (int i = 0; i < n-1; i++)
        remainder[i] = temp[m + i];

    printf("CRC remainder at sender: ");
    for (int i = 0; i < n-1; i++)
        printf("%d", remainder[i]);
    printf("\n");

    // Step 5: Form transmitted message (data + remainder)
    int transmitted[MAX];
    for (int i = 0; i < m; i++)
        transmitted[i] = data[i];
    for (int i = 0; i < n-1; i++)
        transmitted[m + i] = remainder[i];

    printf("Transmitted bit string: ");
    for (int i = 0; i < m + n - 1; i++)
        printf("%d", transmitted[i]);
    printf("\n");

    // Step 6: Introduce error (invert 3rd bit)
    int received[MAX];
    memcpy(received, transmitted, (m + n - 1) * sizeof(int));
    received[2] ^= 1; // invert 3rd bit

    printf("Received bit string (3rd bit inverted): ");
    for (int i = 0; i < m + n - 1; i++)
        printf("%d", received[i]);
    printf("\n");

    // Step 7: Divide received message to detect error
    int temp2[MAX];
    memcpy(temp2, received, (m + n - 1) * sizeof(int));
    divide(temp2, generator, m + n - 1, n);

    printf("Remainder at receiver: ");
    int error = 0;
    for (int i = m; i < m + n - 1; i++) {
        printf("%d", temp2[i]);
        if (temp2[i] != 0)
            error = 1;
    }
    printf("\n");

    if (error)
        printf("Error detected at receiver.\n");
    else
        printf("No error detected.\n");

    return 0;
}
