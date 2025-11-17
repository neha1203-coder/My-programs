#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h> //kbhit() foe key press detection
#include <time.h>//time functions
//back space functionality to remove the errors
char *paragraph =
"Artificial intelligence and machine learning are shaping the future "
"of technology in remarkable ways. Consistent practice in programming, "
"typing, and problem solving helps build strong logical thinking skills. "
"This test will measure your typing accuracy, speed, and ability to stay "
"focused under time pressure. Keep typing until the timer ends.";

int main() {
    char typed[2000] = "";
    int i = 0, errors = 0;
    time_t start, now;
    
    printf("=== Typing Speed Test (60 seconds) ===\n\n");
    printf("Paragraph:\n\n%s\n\n", paragraph);
    printf("Press ENTER to start...");
    getchar();

    system("cls");
    printf("Start typing below. Timer: 60 seconds\n\n");
    printf("%s\n\n", paragraph);
    printf("Your typing:\n\n");

    time(&start);

    while (1) //always true loop
    {
        time(&now);
        if (difftime(now, start) >= 60) break; // 60 sec limit

        if (kbhit()) {
            char ch = getch();

            if (ch == 13) break; // Enter stops test

            typed[i] = ch;

            // error check
            if (ch != paragraph[i]) {
                errors++;
            }

            i++;
            typed[i] = '\0';// null terminate string

            // repaint screen
            system("cls");
            printf("Time left: %d seconds\n\n", 60 - (int)difftime(now,start));
            printf("Paragraph:\n\n%s\n\n", paragraph);

            printf("Your typing:\n\n");
            for (int j = 0; j < i; j++) {
                if (typed[j] == paragraph[j])
                    printf("%c", typed[j]);
                else
                    printf("*");  // mark incorrect character
            }
            fflush(stdout);//flush output buffer
        }
    }

    int totalChars = i;
    float WPM = (totalChars / 5.0);
    float accuracy = (totalChars > 0) ? ((float)(totalChars - errors) / totalChars) * 100 : 0;

    printf("\n\n=== Results ===\n");
    printf("Characters typed: %d\n", totalChars);
    printf("Errors: %d\n", errors);
    printf("WPM: %.2f\n", WPM);
    printf("Accuracy: %.2f%%\n", accuracy);

    printf("\nTest Complete!\n");
    return 0;
}