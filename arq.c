#include <stdio.h>
#include <string.h>
#include <unistd.h>
int i;
int j;



// Function to simulate the sender side of Stop-and-Wait protocol
void sender(const char* message) {
    int total_frames = strlen(message);

    for (int frame_number = 0; frame_number < total_frames; frame_number++) {
        // Simulate sending the frame
        printf("Sender: Sending Frame %d\n", frame_number);

        // Simulate a delay (e.g., for network transmission)
        sleep(1);

        // Simulate a timeout
        sleep(1);
    }

    printf("Sender: All frames sent successfully\n");
}

// Function to simulate the receiver side of Stop-and-Wait protocol
void receiver() {
    int expected_frame = 0;

    while (i<j) {
        // Simulate frame reception
        int received_frame;
        printf("Receiver: Waiting for Frame...\n");

        // Simulate a delay (e.g., for network transmission)
        sleep(1);

        // Simulate successful frame reception
        received_frame = expected_frame;
        printf("Receiver: Received Frame %d\n", received_frame);

        // Simulate a delay (e.g., for processing)
        sleep(1);

        // Simulate acknowledgment
        printf("Receiver: Sending Acknowledgment for Frame %d\n", received_frame);

        // Simulate a delay (e.g., for network transmission)
        sleep(1);

        // Simulate a timeout
        sleep(1);

        expected_frame++;
        i++;
    }
}

int main() {
    // Simulate the sender and receiver
    
    char myString[] = "abcdefghijklmnopqrstuvwxyz";
    size_t length;
    length = strlen(myString);
    
    printf("The length of the string is: %zu\n", length); // Use %zu for size_t
    j=length;

    sender(myString);
    receiver();

    return 0;
}
