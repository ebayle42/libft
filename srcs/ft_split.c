/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 19:00:32 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/25 18:24:28 by ebayle           ###   ########.fr       */
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

static char	*fill_word(char const *str, int debut, int fin)
{
	char *word;
	int i;

	i = 0;
	word = malloc(sizeof(char) * (fin - debut + 1));
	if (!word)
		return (NULL);
	while (debut < fin)
	{
		word[i] = str[debut];
		i++;
		debut++;
	}
	word[i] = 0;
	return (word);
}

static void	ft_terrorism(size_t *i, int *j, int *pos_word)
{
	*i = 0;
	*j = 0;
	*pos_word = -10;
}
char **ft_split(char const *s, char c)
{
	size_t	i;
	int		j;
	int		pos_word;
	char	**tab;

	ft_terrorism(&i, &j, &pos_word);
	if (s == 0)
		return(NULL);
	tab = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!tab)
		return(NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && pos_word < 0)
			pos_word = i;
        else if ((s[i] == c || i == ft_strlen(s)) && pos_word >= 0)
		{
			tab[j] = fill_word(s, pos_word, i);
			if (!tab[j])
				return (ft_free(tab, j));
			pos_word = -1;
			j++;
		}
		i++;
	}
	tab[j] = 0;
	return(tab);
}
