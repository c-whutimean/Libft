/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 03:07:34 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/04 05:04:40 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src, int ch, size_t n)
{
	size_t			i;
	size_t			num;
	unsigned char	*temp_dest;
	unsigned char	*temp_src;

	i = 0;
	num = n;
	temp_dest = (unsigned char *)dst;
	temp_src = (unsigned char *)src;
	while (i < num)
	{
		temp_dest[i] = temp_src[i];
		if (temp_src[i] == (unsigned char)ch)
			return (&((unsigned char *)dst)[i + 1]);
		i++;
	}
	return (NULL);
}
