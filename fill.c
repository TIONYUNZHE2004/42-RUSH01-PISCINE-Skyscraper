/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyun-zhe <tyun-zhe@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:34:20 by tyun-zhe          #+#    #+#             */
/*   Updated: 2024/09/01 18:34:22 by tyun-zhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fill_top(int **grid, int *rules, int n)
{
	int	j;
	int	i;

	j = 0;
	while (j < n)
	{
		if (rules[j] == 1)
		{
			grid[0][j] = n;
		}
		if (rules[j] == n)
		{
			i = 0;
			while (i < n)
			{
				grid[i][j] = i + 1;
				i = i + 1;
			}
		}
		j = j + 1;
	}
}

void	fill_bottom(int **grid, int *rules, int n)
{
	int	j;
	int	i;

	j = 0;
	while (j < n)
	{
		if (rules[n + j] == 1)
		{
			grid[n - 1][j] = n;
		}
		if (rules[n + j] == n)
		{
			i = n - 1;
			while (i >= 0)
			{
				grid[i][j] = n - i;
				i = i - 1;
			}
		}
		j = j + 1;
	}
}

void	fill_left(int **grid, int *rules, int n)
{
	int	j;
	int	i;

	j = 0;
	while (j < n)
	{
		if (rules[2 * n + j] == 1)
		{
			grid[j][0] = n;
		}
		if (rules[2 * n + j] == n)
		{
			i = 0;
			while (i < n)
			{
				grid[j][i] = i + 1;
				i = i + 1;
			}
		}
		j = j + 1;
	}
}

void	fill_right(int **grid, int *rules, int n)
{
	int	j;
	int	i;

	j = 0;
	while (j < n)
	{
		if (rules[3 * n + j] == 1)
		{
			grid[j][n - 1] = n;
		}
		if (rules[3 * n + j] == n)
		{
			i = n - 1;
			while (i >= 0)
			{
				grid[j][i] = n - i;
				i = i - 1;
			}
		}
		j = j + 1;
	}
}

void	fill_one_and_four(int **grid, int *rules, int n)
{
	fill_right(grid, rules, n);
	fill_bottom(grid, rules, n);
	fill_left(grid, rules, n);
	fill_top(grid, rules, n);
}
