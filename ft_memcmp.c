/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 20:36:16 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/05 03:50:31 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	size_t			len;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	len = n;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (len > 0)
	{
		if (str1[i] != str2[i])
		{
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		}
		i++;
		len--;
	}
	return (0);
}
