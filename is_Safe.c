int is_Safe(int **grid, int row, int col, int num)
{
    int i;

    i = 0;
    while (i < N)
    {
        if (grid[row][i] == num || grid[i][col == num])
            return (0);
            i++;
    }
    return (1);
}
