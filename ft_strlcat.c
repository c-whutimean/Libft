/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 00:55:50 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/03 23:26:17 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		condition;
	size_t		dest_len;
	size_t		src_len;

	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dst);
	condition = dstsize - dest_len - 1;
	if (dest_len > dstsize)
		return (dstsize + src_len);
	while (i < condition)
	{
		dst[dest_len + i] = src[i];
		i++;
	}
	dst[dest_len + i] = '\0';
	return (dest_len + src_len);
}
