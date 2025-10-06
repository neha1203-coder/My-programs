#include <stdio.h>

int main()
 {
    int num;

    printf("Enter a number (1-7): ");
    scanf("%d", &num);

    if (num >= 1 && num <= 7) {
        switch(num) {
            case 1: printf("Day %d is Sunday\n", num); break;
            case 2: printf("Day %d is Monday\n", num); break;
            case 3: printf("Day %d is Tuesday\n", num); break;
            case 4: printf("Day %d is Wednesday\n", num); break;
            case 5: printf("Day %d is Thursday\n", num); break;
            case 6: printf("Day %d is Friday\n", num); break;
            case 7: printf("Day %d is Saturday\n", num); break;
        }
    } else {
        printf("Invalid! Enter a number between 1 and 7.\n");
    }

    return 0;
}
