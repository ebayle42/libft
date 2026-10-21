/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 09:47:07 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/21 10:11:48 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	if (ft_strlen(dst) > ft_strlen(src))
	{
		
	}
	return(ft_strlen(dst) + ft_strlen(src));
}

#include <stdio.h>

int main() 
{

    char buffer[10] = "KooR";
    size_t needed = ft_strlcat( buffer, ".fr-demo", sizeof buffer );

    printf( "%s\n", buffer );
    printf( "taille necessaire : %zu\n", needed );

    return 0;
}
