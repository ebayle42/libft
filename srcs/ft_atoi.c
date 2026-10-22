/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:37:47 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/22 14:58:32 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	o;
	int	ans;

	i = 0;
	o = 0;
	ans = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if ((str[i] == '+' || str[i] == '-') 
		&& (str[i + 1] == '+' || str[i + 1] == '-'))
		return (0);
	if (str[i] == '-')
		o++;
	i++;
	if (str[i] == 1)
	{
		ans++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ans = ans * 10 + (str[i] - '0');
		i++;
	}
	if (o > 0)
		return (-ans);
	return (ans);
}
