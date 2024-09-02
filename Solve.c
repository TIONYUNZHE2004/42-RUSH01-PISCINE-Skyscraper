/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyun-zhe <tyun-zhe@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:33:42 by tyun-zhe          #+#    #+#             */
/*   Updated: 2024/09/01 18:33:44 by tyun-zhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	solvesskyscraper(int **grid, int *clues, int n);
bool	findunassignedlocation(int **grid, int *row, int *col, int n);
bool	issafe(int **grid, int *s, int *clues, int n);
bool	is_suduko_safe(int **grid, int *store, int n);
int		count_row(int **grid, int col, int n);
int		count_col(int **grid, int row, int n);
int		cl(int **grid, int *rule, int row, int n);
int		cr(int **grid, int *rule, int row, int n);
int		ct(int **grid, int *rule, int col, int n);
int		cb(int **grid, int *rule, int col, int n);

bool	solveskyscraper(int **grid, int *clues, int n)
{
	int	row;
	int	col;
	int	height;
	int	store[3];

	height = 1;
	if (!findunassignedlocation(grid, &row, &col, n))
		return (true);
	height = 1;
	while (height <= n)
	{
		store[0] = row;
		store[1] = col;
		store[2] = height;
		if (issafe(grid, store, clues, n))
		{
			grid[row][col] = height;
			if (solveskyscraper(grid, clues, n))
				return (true);
			grid[row][col] = 0;
		}
		height++;
	}
	return (false);
}

bool	issafe(int **grid, int *s, int *clues, int n)
{
	int	count[2];

	if (is_suduko_safe(grid, s, n) == false)
		return (false);
	grid[s[0]][s[1]] = s[2];
	count[0] = count_row(grid, s[1], n);
	count[1] = count_col(grid, s[0], n);
	if (count[0] != n && count[1] != n)
		return (true);
	if (count[1] == n
		&& (cl(grid, clues, s[0], n) == 0 || cr(grid, clues, s[0], n) == 0))
	{
		grid[s[0]][s[1]] = 0;
		return (false);
	}
	if (count[0] == n
		&& (ct(grid, clues, s[1], n) == 0 || cb(grid, clues, s[1], n) == 0))
	{
		grid[s[0]][s[1]] = 0;
		return (false);
	}
	grid[s[0]][s[1]] = 0;
	return (true);
}

bool	is_suduko_safe(int **grid, int *store, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (grid[store[0]][i] == store[2] || grid[i][store[1]] == store[2])
			return (false);
		i++;
	}
	return (true);
}

bool	findunassignedlocation(int **grid, int *row, int *col, int n)
{
	*row = 0;
	while (*row < n)
	{
		*col = 0;
		while (*col < n)
		{
			if (grid[*row][*col] == 0)
				return (true);
			(*col)++;
		}
		(*row)++;
	}
	return (false);
}
