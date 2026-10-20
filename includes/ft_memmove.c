/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:09:19 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/20 15:57:03 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned char		*s;
	unsigned char		*tmp;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	tmp = (unsigned char *)dest;
	i = 0;
	while (n > i)
	{
		tmp[i] = s[i];
		d[i] = tmp[i];
		i++;
	}
	return (dest);
}
