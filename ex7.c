#include <iostream>
#include <climits>
using namespace std;

int main() {
    const int NODES = 6; // A,B,C,D,E,F
    char nodeName[] = {'A', 'B', 'C', 'D', 'E', 'F'};

    // Distance vectors received by C
    int B[6] = {5, 0, 8, 12, 6, 2};
    int D[6] = {16, 12, 6, 0, 9, 10};
    int E[6] = {7, 6, 3, 9, 0, 4};

    // Cost from C to each neighbor
    int costToNeighbor[3] = {6, 3, 5}; // B=6, D=3, E=5
    string neighborName[3] = {"B", "D", "E"};

    int neighbor[3][6] = {
        {5, 0, 8, 12, 6, 2},   // from B
        {16, 12, 6, 0, 9, 10}, // from D
        {7, 6, 3, 9, 0, 4}     // from E
    };

    int newDist[6];
    string nextHop[6];

    for (int i = 0; i < NODES; i++) {
        int minDist = INT_MAX;
        string bestHop = "-";

        // Check through all 3 neighbors
        for (int j = 0; j < 3; j++) {
            int cost = costToNeighbor[j] + neighbor[j][i];
            if (cost < minDist) {
                minDist = cost;
                bestHop = neighborName[j];
            }
        }

        newDist[i] = minDist;
        nextHop[i] = bestHop;
    }

    // C itself = 0 distance
    newDist[2] = 0;
    nextHop[2] = "-";

    cout << "Router C's New Routing Table (DVR):\n";
    cout << "-----------------------------------\n";
    cout << "Destination\tDistance\tNext Hop\n";
    cout << "-----------------------------------\n";
    for (int i = 0; i < NODES; i++) {
        cout << nodeName[i] << "\t\t" << newDist[i] << "\t\t" << nextHop[i] << endl;
    }
    cout << "-----------------------------------\n";

    return 0;
}