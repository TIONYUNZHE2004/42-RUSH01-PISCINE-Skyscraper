#include <stdbool.h>

bool FindUnassignedLocation(int grid[N][N], int *row, int *col) {
    for (*row = 0; *row < N; (*row)++) { // Update row
        for (*col = 0; *col < N; (*col)++) { // Update column
            if (grid[*row][*col] == UNASSIGNED) {
                return true; // Found an unassigned location
            }
        }
    }
    return false; // No unassigned locations found
}
