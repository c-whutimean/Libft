/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 00:55:49 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/04 01:44:23 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	neg_checker(int n)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr_fd("-2147483648\n", 1);
			return (n);
		}
		n = n * -1;
		ft_putchar_fd('-', 1);
	}
	return (n);
}

void		ft_putnbr_fd(int n, int fd)
{
	char	out;
	int		ten;
	int		num;

	out = 0;
	num = 0;
	ten = 1;
	n = neg_checker(n);
	num = n;
	while (n > 9)
	{
		n = n / 10;
		ten = ten * 10;
	}
	if (ten != 0)
	{
		out = num / ten;
		out = out + '0';
		ft_putchar_fd(out, fd);
		num = num % ten;
		ten = ten / 10;
	}
}
