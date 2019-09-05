/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 03:38:51 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/03 23:51:03 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = len;
	if (src[i] != '\0')
	{
		while (i <= len)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		while (dst[i] != '\0')
			i++;
	}
	return (dst);
}
