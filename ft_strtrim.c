/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 00:59:54 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/07 01:30:54 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		from_behind(char const *s, int *i, int *back)
{
	while (s[*i] == ' ' || s[*i] == '\n' || s[*i] == '\t')
	{
		*i = *i - 1;
		*back = *back + 1;
	}
}

char			*ft_strtrim(char const *s)
{
	int			i;
	int			back;
	char		*copy;

	i = 0;
	if (!s)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	i = ft_strlen(s) - 1;
	if (i == -1)
		return (ft_strnew(0));
	back = 0;
	from_behind(s, &i, &back);
	copy = ft_strnew(ft_strlen(s) - back);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < (int)ft_strlen(s) - back)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
