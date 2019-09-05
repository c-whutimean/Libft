/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 01:51:14 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/03 23:50:06 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *str, int c, size_t len)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = (char *)str;
	while (i < len)
	{
		temp[i] = c;
		i++;
	}
	return ((void *)temp);
}
