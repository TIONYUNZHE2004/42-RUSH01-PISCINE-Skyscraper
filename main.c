#include <unistd.h>

#define N 4
void    initialize_array(int ***arr)
{
        int i;
        int j;

        i = 0;
        j = 0;
        *arr = malloc(sizeof(int *) * N);
        while (i < N)
        {
                arr[i] = malloc(sizeof(int) * N);
                i++;
        }
        i = 0;
        while (i < N)
        {
                while (j < N)
                {
                        arr[i][j] = 0;
                        j++;
                }
                i++;
        }
}
int main(int argc, char *argv[])
{
        if (argc != 2 || check_argument(argv[1]))
                {
                        write(1, "Invalid Input. Try Again!\n", 24);
                        return (1);
                }
         //Create a 2D array using malloc
         int **grid;
         int **rules;

         grid = NULL;
         rules = NULL;
         initialize_array(&grid);
         initialize_array(&rules);
         int i = 0;
         while (i < N)
         {
                 free(grid[i]);
                 free(rules[i]);
                 i++;
         }
         free(grid);
         free(rules);
}
