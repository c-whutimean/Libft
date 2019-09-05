/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 02:14:17 by trinnguy          #+#    #+#             */
/*   Updated: 2019/08/22 22:07:54 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		on;
	char	*found;

	on = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			found = (char *)&s[i];
			on = 1;
		}
		i++;
	}
	if (c == '\0')
	{
		on = 1;
		found = (char *)&s[i];
	}
	if (on == 0)
		return (0);
	return (found);
}
