/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyun-zhe <tyun-zhe@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:34:02 by tyun-zhe          #+#    #+#             */
/*   Updated: 2024/09/01 18:34:04 by tyun-zhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cl(int **grid, int *rule, int row, int n)
{
	int	j;
	int	max;
	int	count;

	max = 0;
	count = 0;
	j = 0;
	while (j < n)
	{
		if (grid[row][j] > max)
		{
			max = grid[row][j];
			count++;
		}
		j++;
	}
	if (count != rule[2 * n + row])
		return (0);
	return (1);
}

int	cr(int **grid, int *rule, int row, int n)
{
	int	j;
	int	max;
	int	count;

	max = 0;
	count = 0;
	j = n - 1;
	while (j >= 0)
	{
		if (grid[row][j] > max)
		{
			max = grid[row][j];
			count++;
		}
		j--;
	}
	if (count != rule[3 * n + row])
		return (0);
	return (1);
}

int	ct(int **grid, int *rule, int col, int n)
{
	int	j;
	int	max;
	int	count;

	max = 0;
	count = 0;
	j = 0;
	while (j < n)
	{
		if (grid[j][col] > max)
		{
			max = grid[j][col];
			count++;
		}
		j++;
	}
	if (count != rule[col])
		return (0);
	return (1);
}

int	cb(int **grid, int *rule, int col, int n)
{
	int	j;
	int	max;
	int	count;

	max = 0;
	count = 0;
	j = n - 1;
	while (j >= 0)
	{
		if (grid[j][col] > max)
		{
			max = grid[j][col];
			count++;
		}
		j--;
	}
	if (count != rule[n + col])
		return (0);
	return (1);
}
