/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 03:38:51 by trinnguy          #+#    #+#             */
/*   Updated: 2019/08/05 16:24:52 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	int i;

	i = (int)len;
	if (src[i] != '\0')
	{
		while (src[i] <= len)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
	{
		while (dest[i] != '\0')
			i++;
	}
	return (dest);
}
