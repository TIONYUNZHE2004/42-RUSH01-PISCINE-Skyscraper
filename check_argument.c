/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argument.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:08:42 by wshee             #+#    #+#             */
/*   Updated: 2024/09/01 17:14:39 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	check_argument(char *argv)
{
	int	i;
	int	num_count;
	int	space_count;

	i = 0;
	num_count = 0;
	space_count = 0;
	while (argv[i])
	{
		if (argv[i] >= '0' && argv[i] <= '9')
			num_count++;
		else if (argv[i] == ' ')
			space_count++;
		else
		{
			return (0);
		}
		i++;
	}
	if (num_count == space_count + 1 && num_count % 4 == 0)
		return (num_count / 4);
	return (0);
}
