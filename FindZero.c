#include <stdbool.h>

bool    FindZero(int grid[N][N], N, N)
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if (grid[i][j] == 0)
                return (true);
        }
    }
    return (false);
}
