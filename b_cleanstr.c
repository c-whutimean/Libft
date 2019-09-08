/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_cleanstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 06:33:51 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/07 22:15:17 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*b_cleanstr(char *dirty)
{
	char	*fresh;
	int		d;
	int		f;

	d = 0;
	f = 0;
	if (!dirty)
		return (NULL);
	fresh = ft_strnew(ft_strlen(dirty));
	while (dirty[d] != '\0')
	{
		while (!((dirty[d] >= 'a' && dirty[d] <= 'z') ||
					(dirty[d] >= 'A' && dirty[d] <= 'Z') ||
					dirty[d] == '\0' || dirty[d] == ' ' || dirty[d] == '\t' ||
					dirty[d] == '\n'))
			d++;
		if ((dirty[d] >= 'a' && dirty[d] <= 'z') ||
				(dirty[d] >= 'A' && dirty[d] <= 'Z') ||
				dirty[d] == ' ' || dirty[d] == '\t' || dirty[d] == '\n')
			fresh[f++] = dirty[d++];
	}
	fresh[f] = '\0';
	return (fresh);
}
