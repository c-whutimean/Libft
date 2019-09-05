/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 23:56:12 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/03 23:55:21 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *in, size_t len)
{
	size_t	h;
	int		n;
	char	*ptr;

	h = 0;
	n = 0;
	if (*in == '\0')
		return ((char *)big);
	while (big[h] != '\0' && h < len)
	{
		if (big[h] == in[0])
		{
			ptr = (char *)&big[h];
			return (ptr);
		}
		h++;
	}
	return (NULL);
}
