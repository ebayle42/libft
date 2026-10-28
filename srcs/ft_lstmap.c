/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebayle <ebayle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:26:55 by ebayle            #+#    #+#             */
/*   Updated: 2026/10/28 18:48:01 by ebayle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_obj;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while(lst)
	{
		new_obj = ft_lstnew(f(lst -> content));
		if (!new_obj)
		{
			ft_lstclear(&new_list, del);
			del(new_obj -> content);
			
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_obj);
		lst = lst -> next;
	}
	return (new_list);
}
