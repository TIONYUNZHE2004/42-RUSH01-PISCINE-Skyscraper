#include <stdio.h>

void fill_one_and_four(int grid[4][4], int rules[4][4]) {
    int i;
    int j;

    i = 0; // column up
    j = 0;
    while (j < 4) {
        if (rules[0][j] == 1) {
            grid[0][j] = 4;
        }
        if (rules[0][j] == 4) {
            i = 0;
            while (i < 4) {
                grid[i][j] = i + 1; // Assign values to the grid
                i++;
            }
            i = 0;
        }
        j++;
    }

    i = 1; // column down
    j = 0;
    
    while (j < 4) {
        if (rules[1][j] == 1) {
            grid[3][j] = 4;
        }
        if (rules[1][j] == 4) {
            i = 3;
            while (i >= 0) {
                grid[i][j] = 4 - i; // Assign values to the grid
                i--;
            }
            i = 3;
        }
        j++;
    }
    
    i = 0; // row left
    j = 0;
    
    while (j < 4)
    {
        if (rules[2][j] == 1)
        {
            grid[j][0] = 4;
        }
        if (rules[2][j] == 4)
        {
            i = 0;
            while (i < 4)
            {
                grid[j][i] = i + 1;
                i++;
            }
            i = 0;
        }
        j++;
    }
    
    i = 0; //row right
    j = 0;
    
    while (j < 4)
    {
        if (rules[3][j] == 1)
        {
            grid[j][3] = 4;
        }
        if (rules[3][j] == 4)
        {
            i = 3;
            while (i >= 0)
            {
                grid[j][i] = 4 - i;
                i--;
            }
            i = 3;
        }
        j++;
    }
    
}

int main(void) {
    int rules[4][4] = {{2,1,3,2}, {2,3,2,1}, {2,1,3,2}, {2,3,2,1}};
    int grid[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};

    fill_one_and_four(grid, rules); // Call the function to modify the grid

    // Print the modified grid
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}