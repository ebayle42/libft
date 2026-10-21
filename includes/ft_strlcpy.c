/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 09:37:36 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/21 10:41:03 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	
}
#include <stdio.h>

int main(void)
{
	char source[] = "Hello";
	char dest[] = "ooo";
	strlcpy(dest, source, 4);
	printf("%s\n", dest);
	return 0;
}