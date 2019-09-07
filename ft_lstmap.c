/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 00:43:40 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/07 00:16:17 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*node;

	head = NULL;
	head = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	node = f(lst);
	head = node;
	while (lst->next)
	{
		lst = lst->next;
		node->next = f(lst);
		node = node->next;
	}
	return (head);
}
