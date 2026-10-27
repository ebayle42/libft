/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltsnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 00:26:11 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/27 01:35:32 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;
	node = malloc(sizeof(t_list));
	if (!node)
		return(NULL);
	node-> content = content;
	node-> next = NULL;
	return (node);
}
