#include <stdio.h>
#include <unistd.h>

int check_left_visibility(int **grid, int **rule)
{
    int i;
    int j;
    int max;
    int count;

    i = 0;
    max = 0;
    count = 0;
    while (i < 4) //Hardcode
    {
        j = 0;
        while (j < 4)
        {
            if (grid[i][j] > max)
            {
                max = grid[i][j];
                count++;
            }
            j++;
        }
        if (count != rule[2][i])
            return(0);
        i++;
    }
    return (1);
}

int check_right_visibility(int **grid, int **rule)
{
    int i;
    int j;
    int max;
    int count;

    i = 0;
    max = 0;
    count = 0;
    while (i < 4) //Hardcode
    {
        j = N - 1; //The N is the size of array
        while (j >= 0)
        {
            if (grid[i][j] > max)
            {
                max = grid[i][j];
                count++;
            }
            j--;
        }
        if (count != rule[3][i])
            return(0);
        i++;
    }
    return (1);
}

int check_top_visibility(int **grid, int **rule)
{
    int i;
    int j;
    int max;
    int count;

    i = 0;
    max = 0;
    count = 0;
    while (i < 4) //Hardcode
    {
        j = 0;
        while (j < 4)
        {
            if (grid[j][i] > max)
            {
                max = grid[j][i];
                count++;
            }
            j++;
        }
        if (count != rule[0][i])
            return(0);
        i++;
    }
    return (1);
}

int check_bottom_visibility(int **grid, int **rule)
{
    int i;
    int j;
    int max;
    int count;

    i = 0;
    max = 0;
    count = 0;
    while (i < 4) //Hardcode
    {
        j = N - 1;
        while (j >= 0)
        {
            if (grid[j][i] > max)
            {
                max = grid[j][i];
                count++;
            }
            j--;
        }
        if (count != rule[1][i])
            return(0);
        i++;
    }
    return (1);
}
