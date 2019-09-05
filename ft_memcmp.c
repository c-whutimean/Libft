/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 20:36:16 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/04 01:24:22 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	int				len;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	len = (int)n;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (!s1 || !s2)
		return (0);
	while (len >= 0)
	{
		while (str1[i] == str2[i])
		{
			if (str1[i] == '\0')
				return (0);
			i++;
		}
		len--;
	}
	return ((unsigned char)str1[0] - (unsigned char)str2[0]);
}
