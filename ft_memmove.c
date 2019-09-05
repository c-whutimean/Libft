/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 04:05:09 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/04 00:45:19 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*temp_src;
	char		*temp_dest;

	temp_src = src;
	temp_dest = dst;
	if (!dst || !src || !len)
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
	return (temp_dest);
}
