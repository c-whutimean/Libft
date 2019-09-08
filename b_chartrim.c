/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_chartrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 22:18:24 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/07 22:18:30 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*b_chartrim(char const *s, char c)
{
	int			i;
	int			back;
	char		*copy;

	i = 0;
	back = 0;
	if (!s)
		return (NULL);
	while (*s == c)
		s++;
	i = ft_strlen(s) - 1;
	if (i == -1)
		return (ft_strnew(0));
	while (s[i--] == c)
		back++;
	copy = ft_strnew(ft_strlen(s) - back);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < (int)ft_strlen(s) - back)
	{
		copy[i] = s[i];
		i++;
	}
	return (copy);
}
