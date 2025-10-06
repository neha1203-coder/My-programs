#include <stdio.h>

int main()
{
    int n = 10; // Number of nodes (A-J)
    int adj[10][10] = {0};

    // Edges as per given diagram
    adj[0][9] = 1; // A -> J
    adj[0][7] = 1; // A -> H
    adj[1][9] = 1; // B -> J
    adj[9][8] = 1; // J -> I
    adj[9][3] = 1; // J -> D
    adj[9][5] = 1; // J -> F
    adj[2][3] = 1; // C -> D
    adj[3][2] = 1; // D -> C
    adj[3][4] = 1; // D -> E
    adj[8][6] = 1; // I -> G
    adj[8][5] = 1; // I -> F
    adj[6][8] = 1; // G -> I
    adj[7][8] = 1; // H -> I

    // Print adjacency matrix
    printf("Adjacency Matrix Representation:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }
    return 0;
}
