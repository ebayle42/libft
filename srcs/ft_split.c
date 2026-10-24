/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 19:00:32 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/24 19:47:03 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char sep)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] != sep && (str[i + 1] == sep || str[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static void	*ft_free(char **strs, int words)
{
	int i;

	i = 0;
	while (i< words)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}
