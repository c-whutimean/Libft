/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 02:04:56 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/04 01:45:36 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	size_t		count;
	const char	*temp_str;

	i = 0;
	count = (int)n;
	temp_str = (char *)s;
	if (!s)
		return (NULL);
	while (i <= count)
	{
		if (temp_str[i] == c)
			return ((void *)&temp_str[i]);
		i++;
	}
	return (NULL);
}
