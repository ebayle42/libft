/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 06:31:06 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/27 07:54:24 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*liste;
	t_list	*tmp;
	
	if (!lst)
		return ;
	liste = *lst;
	while (liste)
	{
		tmp = (liste -> next);
		ft_lstdelone(liste, del);
		liste = tmp;
	}
	free(liste);
	*lst = NULL;
}