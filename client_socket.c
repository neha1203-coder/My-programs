#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    int client_socket;
    struct sockaddr_in server_addr;
    int num1, num2, sum;

    // Create socket
    client_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (client_socket < 0) {
        perror("Socket creation failed");
        exit(1);
    }

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(8080);
    server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");

    // Connect to server
    if (connect(client_socket, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
        perror("Connection failed");
        close(client_socket);
        exit(1);
    }
    printf("Connected to server.\n");

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Send numbers
    send(client_socket, &num1, sizeof(num1), 0);
    send(client_socket, &num2, sizeof(num2), 0);

    // Receive result
    recv(client_socket, &sum, sizeof(sum), 0);

    printf("Sum received from server: %d\n", sum);

    close(client_socket);
    return 0;
}