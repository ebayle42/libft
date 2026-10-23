/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 11:10:40 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/23 15:02:43 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	void	*error;

	if (nmemb == 0 || size == 0)	
	{
		error = ft_calloc(1, 1);
		return (error);
	}
	if ((nmemb * size) > 2147483647)
		return (NULL);
	if (nmemb >= 2147483647 || size >= 2147483647)
		return (NULL);
	ptr = malloc((size) * nmemb);
	if (!ptr)
		return (NULL);
	ptr = ft_memset((unsigned char *)ptr, 0, size * nmemb);
	return (ptr);
}