#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <windows.h>
int i;
int j;

// Function to simulate the sender side of Stop-and-Wait protocol
void sender(const char* message)
{
    int total_frames = strlen(message);
    int x;
	int frame_number;
    for (frame_number = 0; frame_number < total_frames; frame_number++) {
        // Simulate sending the frame
        printf("Sender: Sending Frame %d\n", frame_number);
        // Simulate a delay (e.g., for network transmission)
        Sleep(1);
        // Simulate waiting for frame acknowledgement
        printf("Sender: Waiting for Frame Acknowledgment for Frame %d\n",frame_number);
        Sleep(1);
        // Simulate acknowledge the frame
        x=receiver(frame_number);
        printf("\nSender: Waiting for Frame Acknowledgment for Frame %d\n",frame_number);
        Sleep(1);
        if(x==1)
        	printf("Sender: Received Frame Ack for %d\n", frame_number);
        Sleep(1);
    }
    printf("Sender: All frames sent successfully\n");
}
// Function to simulate the receiver side of Stop-and-Wait protocol
int receiver(int received_frame)
{
        // Simulate frame reception
        printf("\nReceiver: Waiting for Frame...\n");
        // Simulate a delay (e.g., for network transmission)
        Sleep(1);
        // Simulate successful frame reception
        printf("Receiver: Received Frame %d\n", received_frame);
        Sleep(1);
        // Simulate acknowledgment
        printf("Receiver: Sending Frame ACK %d\n", received_frame);
        // Simulate a delay (e.g., for network transmission)
        Sleep(1);
        return 1;
}
int main()
{
    // Simulate the sender and receiver
    char myString[] = "Abc";
    size_t length;
    length = strlen(myString);
    printf("The length of the string is: %zu\n\n", length); // Use %zu for size_t
    j=length;
		sender(myString);
    return 0;
}
