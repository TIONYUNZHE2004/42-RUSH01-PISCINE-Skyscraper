#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

int	check_argument(int argc, char argv[])
{
	int	i;

	i = 0;
	if (argc != 2 || argv == NULL)
    {
        ft_putstr("Invalid Input");
		return (0);
    }
	while (argv[i])
	{
		if ((i % 2 == 0) && !(argv[i] >= '1' && argv[i] <= '4'))
        {
            ft_putstr("Invalid Input");
			return (0);
        }
		else if ((i % 2 != 0) && argv[i] != ' ')
        {
            ft_putstr("Invalid Input");
			return (0);
        }
		i++;
	}
	if (i != 30)
    {
        ft_putstr("Invalid Input");
		return (0);
    }
    
	return (1);
}
