/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyun-zhe <tyun-zhe@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:19:59 by tyun-zhe          #+#    #+#             */
/*   Updated: 2024/09/01 18:57:43 by tyun-zhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

int		check_argument(char *argv);
void	ft_putstr(char *str);
void	initialize_array(int ***arr, int n);
void	fill_rules(char *argv, int *rules, int count);
void	fill_one_and_four(int **grid, int *rules, int n);
bool	solveskyscraper(int **grid, int *clues, int n);

void	print_out(int **grid, int n)
{
	int		i;
	int		j;
	char	buffer[2];

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			buffer[0] = grid[i][j] + '0';
			write(1, buffer, 1);
			if (j != n - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	free_memo(int **grid, int n, int *rules)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
	free(rules);
}

int	main(int argc, char *argv[])
{
	int	**grid;
	int	n;
	int	*rules;

	n = 0;
	if (argc != 2 || (check_argument(argv[1])) == 0)
	{
		ft_putstr("Error");
		return (1);
	}
	n = check_argument(argv[1]);
	rules = malloc(sizeof(int) * n * 4);
	fill_rules(argv[1], rules, n * 4);
	initialize_array(&grid, n);
	if (solveskyscraper(grid, rules, n))
		print_out(grid, n);
	else
		ft_putstr("Error");
	free_memo(grid, n, rules);
	return (0);
}
