/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 21:33:19 by trinnguy          #+#    #+#             */
/*   Updated: 2019/08/07 00:09:07 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		h;
	int		n;
	char	*ptr;

	h = 0;
	n = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[h] != '\0')
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
