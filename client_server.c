#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    int server_socket, client_socket;
    struct sockaddr_in server_addr, client_addr;
    socklen_t addr_size;
    int num1, num2, sum;

    // Create socket
    server_socket = socket(AF_INET, SOCK_STREAM, 0);
    if (server_socket < 0) {
        perror("Socket creation failed");
        exit(1);
    }
    printf("Server socket created.\n");

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(8080);
    server_addr.sin_addr.s_addr = INADDR_ANY;

    // Bind
    if (bind(server_socket, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
        perror("Bind failed");
        close(server_socket);
        exit(1);
    }
    printf("Bind successful.\n");

    // Listen
    if (listen(server_socket, 5) < 0) {
        perror("Listen failed");
        close(server_socket);
        exit(1);
    }
    printf("Server listening on port 8080...\n");

    addr_size = sizeof(client_addr);
    client_socket = accept(server_socket, (struct sockaddr *)&client_addr, &addr_size);
    if (client_socket < 0) {
        perror("Accept failed");
        close(server_socket);
        exit(1);
    }
    printf("Client connected.\n");

    // Receive two integers
    recv(client_socket, &num1, sizeof(num1), 0);
    recv(client_socket, &num2, sizeof(num2), 0);

    printf("Numbers received: %d and %d\n", num1, num2);

    sum = num1 + num2;

    // Send result
    send(client_socket, &sum, sizeof(sum), 0);
    printf("Result sent to client: %d\n", sum);

    close(client_socket);
    close(server_socket);

    return 0;
}





