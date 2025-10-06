#include <stdio.h>
#include <stdlib.h>

#define MAX 30

// Structure for Edge
struct Edge {
    int u, v, w;
};

// Structure for Subset (used in Union-Find)
struct Subset {
    int parent;
    int rank;
};

// Function to find set of an element (with path compression)
int find(struct Subset subsets[], int i) {
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}

// Function to do union of two sets
void Union(struct Subset subsets[], int x, int y) {
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);

    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

// Comparison function for qsort
int cmp(const void* a, const void* b) {
    struct Edge* a1 = (struct Edge*)a;
    struct Edge* b1 = (struct Edge*)b;
    return a1->w > b1->w;
}

int main() {
    int V, E;
    struct Edge edges[MAX];

    printf("Enter number of vertices: ");
    scanf("%d", &V);

    printf("Enter number of edges: ");
    scanf("%d", &E);

    printf("Enter edges (u v w):\n");
    for (int i = 0; i < E; i++) {
        scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].w);
    }

    // Sort edges by weight
    qsort(edges, E, sizeof(edges[0]), cmp);

    struct Subset* subsets = (struct Subset*)malloc(V * sizeof(struct Subset));

    for (int v = 0; v < V; v++) {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }

    printf("\nEdges in the Minimum Spanning Tree:\n");
    int minCost = 0;
    int e = 0; // count of edges in MST
    for (int i = 0; i < E && e < V - 1; i++) {
        int u = edges[i].u;
        int v = edges[i].v;

        int set_u = find(subsets, u);
        int set_v = find(subsets, v);

        if (set_u != set_v) {
            printf("%d -- %d == %d\n", u, v, edges[i].w);
            minCost += edges[i].w;
            Union(subsets, set_u, set_v);
            e++;
        }
    }

    printf("\nMinimum Cost of Spanning Tree = %d\n", minCost);

    free(subsets);
    return 0;
}
