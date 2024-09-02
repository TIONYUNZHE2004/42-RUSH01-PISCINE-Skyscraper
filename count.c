/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyun-zhe <tyun-zhe@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:35:10 by tyun-zhe          #+#    #+#             */
/*   Updated: 2024/09/01 18:35:14 by tyun-zhe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_row(int **grid, int col, int n)
{
	int	rowcount;
	int	i;

	i = 0;
	rowcount = 0;
	while (i < n)
	{
		if (grid[i][col] != 0)
			rowcount++;
		i++;
	}
	return (rowcount);
}

int	count_col(int **grid, int row, int n)
{
	int	colcount;
	int	i;

	i = 0;
	colcount = 0;
	while (i < n)
	{
		if (grid[row][i] != 0)
			colcount++;
		i++;
	}
	return (colcount);
}
