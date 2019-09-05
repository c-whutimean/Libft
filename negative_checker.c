/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   negative_checker.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 01:28:20 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/04 03:06:00 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	negative_checker(int n)
{
	if (n < 0)
	{
		if (n == -2147483647)
		{
			ft_putstr("-2147483647\n");
			return (n);
		}
		n = n * -1;
		ft_putstr("-");
	}
	return (n);
}
