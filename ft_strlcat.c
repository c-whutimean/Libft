/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 00:55:50 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/12 21:10:12 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	d_len;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	if (d_len >= dstsize)
		return (dstsize + s_len);
	if (s_len < dstsize - d_len)
		ft_strncpy(dst + d_len, src, s_len + 1);
	else
	{
		ft_strncpy(dst + d_len, src, dstsize - d_len - 1);
		dst[dstsize - 1] = '\0';
	}
	return (d_len + s_len);
}
