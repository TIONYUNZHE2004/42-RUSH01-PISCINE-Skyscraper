void    printGrid(int **grid, int size)
{
    int i;
    int j;

    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size)
        {
            write(1, &grid[i][j], 1);
            j++;
        } 
        i++;
    }
}	
