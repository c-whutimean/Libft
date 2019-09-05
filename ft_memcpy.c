/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 02:41:23 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/04 00:32:27 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memcpy(void *dst, const void *src, size_t n)
{
	int			i;
	int			num;
	char		*temp_dest;
	const char	*temp_src;

	i = 0;
	num = (int)n;
	temp_dest = dst;
	temp_src = src;
	while (temp_src[i] != '\0' || num > 0)
	{
		temp_dest[i] = temp_src[i];
		i++;
		num--;
	}
	return (dst);
}
