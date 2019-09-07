/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 23:56:12 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/05 21:39:04 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *in, size_t len)
{
	size_t	b;
	size_t	i;
	char	*ptr;

	b = 0;
	i = 0;
	while ((big[b] != '\0') && (b < len))
	{
		while ((big[b + i] == in[i]) && (in[i]) && ((b + i) < len))
			i++;
		if (in[i] == '\0')
		{
			ptr = (char *)&big[b];
			return (ptr);
		}
		i = 0;
		b++;
	}
	if (in[0] == '\0')
		return ((char *)&big[b]);
	return (NULL);
}
