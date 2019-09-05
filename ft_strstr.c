/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 21:33:19 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/05 06:15:41 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		h;
	int		n;
	int		len;

	h = 0;
	n = 0;
	len = 0;
	if (!needle)
		return ((char *)haystack);
	while(needle[n] != '\0')
	{
		len++;
		n++;
	}
	n = 0;
	while (haystack[h] != '\0')
	{
		if (haystack[h] == needle[n])
		{
			h++;
			n++;
		}
		if (n == len)
			return ((char *)&haystack[h - len]);
		h++;
	}
	return (0);
}
