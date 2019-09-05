/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 04:05:09 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/05 03:33:42 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*temp_src;
	unsigned char	*temp_dest;

	temp_src = (unsigned char *)src;
	temp_dest = (unsigned char *)dst;
	if (!dst && !src && !len)
		return (NULL);
	if (src < dst)
	{
		while (len > 0)
		{
			temp_dest[len - 1] = temp_src[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return ((unsigned char *)temp_dest);
}
