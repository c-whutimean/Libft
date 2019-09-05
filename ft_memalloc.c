/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 23:49:53 by trinnguy          #+#    #+#             */
/*   Updated: 2019/08/22 22:09:50 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void		*ptr;

	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	else
	{
		ft_bzero(ptr, size);
		return (ptr);
	}
}
