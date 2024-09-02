/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weatai <weatai@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:18:43 by weatai            #+#    #+#             */
/*   Updated: 2024/09/01 17:48:05 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	initialize_array(int ***arr, int n)
{
	int	i;
	int	j;

	i = 0;
	*arr = malloc(sizeof(int *) * n);
	while (i < n)
	{
		(*arr)[i] = malloc(sizeof(int) * n);
		i++;
	}
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			(*arr)[i][j] = 0;
			j++;
		}
		i++;
	}
}
