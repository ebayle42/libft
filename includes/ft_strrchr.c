/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:04:20 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/20 18:07:56 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int	i;
	int	k;

	str = (char *)s;
	i = 0;
	k = 0;
	while(s[i] != '\0')
		i++;
	while(str[i] != c)
	{
		str[k] = s[i];
		k++;
		i--;
	}
	str[k] = '\0';
	return(str);
}

#include <stdio.h>
#include <string.h>

int main() {
  char myStr[] = "Hello World";
  char *myPtr = ft_strrchr(myStr, 'o');
  if (myPtr != NULL) {
    printf("%s\n", myPtr);
  }
  return 0;
}