/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 06:50:06 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/04 05:02:13 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd(t_list **alst, t_list *new)
{
	t_list	*add_elem;

	if (!(add_elem = (t_list *)malloc(sizeof(t_list))))
		return ;
	add_elem = new;
	add_elem->next = *alst;
	*alst = add_elem;
}
