/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 23:56:12 by trinnguy          #+#    #+#             */
/*   Updated: 2019/08/07 00:12:51 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		h;
	int		n;
	char	*ptr;

	h = 0;
	n = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[h] != '\0' && h < len)
	{
		if (haystack[h] == needle[0])
		{
			ptr = (char *)&haystack[h];
			return (ptr);
		}
		h++;
	}
	return (NULL);
}
