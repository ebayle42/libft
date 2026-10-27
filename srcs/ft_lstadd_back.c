/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 03:11:00 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/27 03:49:59 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;
	if (!lst || !new)
		return ;
	list = *lst;
	while(list -> next)
		list = list -> next;
	list -> next = new;
}