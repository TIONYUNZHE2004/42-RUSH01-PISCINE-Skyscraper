/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_rules.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wshee <wshee@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:41:24 by wshee             #+#    #+#             */
/*   Updated: 2024/09/01 17:41:27 by wshee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fill_rules(char *argv, int *rules, int count)
{
	int	counter;

	counter = 0;
	while (*argv && counter < count)
	{
		if (*argv >= '0' && *argv <= '9')
		{
			rules[counter] = *argv - '0';
			counter++;
		}
		argv++;
	}
}
