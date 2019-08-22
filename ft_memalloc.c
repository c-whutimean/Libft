/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 23:49:53 by trinnguy          #+#    #+#             */
/*   Updated: 2019/08/08 00:20:42 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *str, size_t n);

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
