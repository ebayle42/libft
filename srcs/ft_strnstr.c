/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:28:00 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/22 15:52:03 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	lent;

	lent = ft_strlen(little);
	if (lent > len)
		return (NULL);
}

#include <stdio.h>

int main (void)
{
	char str[] = "Hello, world";
	char search[] = "Hell";
	ft_strnstr(str, search, 5);
	return (0);
}