/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 21:33:19 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/05 21:39:48 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		h;
	int		hh;
	int		n;

	h = 0;
	hh = 0;
	n = 0;
	if (needle[0] == '\0')
		return ((char *)&haystack[h]);
	while (haystack[h] != '\0')
	{
		hh = h;
		while ((haystack[hh] == needle[n]) && (needle[n]))
		{
			hh++;
			n++;
		}
		if (!(needle[n]))
			return ((char *)&haystack[h]);
		n = 0;
		h++;
	}
	return (0);
}
