/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:19:32 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/21 16:27:36 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{

	size_t	i;
	char *str;
	char *str2;

	i = 0;
	str = (char *)s1;
	str2 = (char *)s2;
	while ((i < n) && (str[i] != '\0' || str2[i] != '\0'))
	{
		if (str[i] > str2[i])
			return (str[i] - str2[i]);
		if (str[i] < str2[i])
			return (str[i] - str2[i]);
		i++;
	}
	return (0);
}
