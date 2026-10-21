/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:44:38 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/21 11:51:33 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	size_t	k;
	char		*str;

	i = 0;
	k = 0;
	str = (char *)s;
	while (str[i] != c && i <= n)
		i++;
	if (str[i] == c)
	{
		while (str[i] != '\0')
		{
			str[k] = str[i];
			k++;
			i++;
		}
		str[k] = '\0';
		return(str);
	}
	else
		return (NULL);
}

#include <stdio.h>
#include <string.h>

int main() {
  char myStr[] = "Hello World!";
  char *myPtr = (char*)ft_memchr(myStr, 'o', 4);
  if (myPtr != NULL) {
    printf("%s", myPtr);
  }
  return 0;
}