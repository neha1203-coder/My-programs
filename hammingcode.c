#include <stdio.h>

int main() {
    int data[8];     // 8-bit input
    int hamming[12]; // 12-bit Hamming code

    // Input 8-bit data
    printf("Enter 8-bit data (0 or 1) left to right: ");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &data[i]);
    }

    // Map data bits to Hamming positions (1-based indexing)
    // Positions: 1(P1) 2(P2) 3(D1) 4(P4) 5(D2) 6(D3) 7(D4) 8(P8) 9(D5) 10(D6) 11(D7) 12(D8)
    hamming[2] = data[0];  // D1
    hamming[4] = data[1];  // D2
    hamming[5] = data[2];  // D3
    hamming[6] = data[3];  // D4
    hamming[8] = data[4];  // D5
    hamming[9] = data[5];  // D6
    hamming[10] = data[6]; // D7
    hamming[11] = data[7]; // D8

    // Compute parity bits (even parity)
    // P1 covers positions: 1,3,5,7,9,11
    hamming[0] = (hamming[2] + hamming[4] + hamming[6] + hamming[8] + hamming[10]) % 2;

    // P2 covers positions: 2,3,6,7,10,11
    hamming[1] = (hamming[2] + hamming[5] + hamming[6] + hamming[9] + hamming[10]) % 2;

    // P4 covers positions: 4,5,6,7,12
    hamming[3] = (hamming[4] + hamming[5] + hamming[6] + hamming[11]) % 2;

    // P8 covers positions: 8,9,10,11,12
    hamming[7] = (hamming[8] + hamming[9] + hamming[10] + hamming[11]) % 2;

    // Print encoded Hamming code
    printf("Encoded 12-bit Hamming code: ");
    for (int i = 0; i < 12; i++)
        printf("%d", hamming[i]);
    printf("\n");

    return 0;
}
