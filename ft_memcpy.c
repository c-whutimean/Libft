/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 02:41:23 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/04 20:47:05 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memcpy(void *dst, const void *src, size_t n)
{
	int					i;
	int					num;
	unsigned char		*temp_dest;
	unsigned char		*temp_src;

	i = 0;
	num = (int)n;
	temp_dest = (unsigned char *)dst;
	temp_src = (unsigned char *)src;
	if (dst == NULL && src == NULL && num > 0)
		num = 0;
	while (i < num)
	{
		temp_dest[i] = temp_src[i];
		i++;
	}
	return ((unsigned char *)dst);
}
