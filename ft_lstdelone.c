/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 07:30:55 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/01 04:40:09 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*node;

	node = NULL;
	if (!alst || !*alst)
		return ;
	node = *alst;
	del((node->content), (node->content_size));
	free(*alst);
	*alst = NULL;
}
