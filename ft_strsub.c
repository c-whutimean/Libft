/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 01:47:42 by trinnguy          #+#    #+#             */
/*   Updated: 2019/08/11 22:46:01 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnew(size_t size);

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*sub;

	i = 0;
	if (!s)
		return (NULL);
	if (!sub)
		return (NULL);
	sub = ft_strnew(len);
	while (len > 0)
	{
		sub[i] = s[start];
		i++;
		start++;
		len--;
	}
	return (sub);
}
