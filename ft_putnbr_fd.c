/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 00:55:49 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/05 05:38:27 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	neg_checker(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	return (n);
}

static int	max_int_checker(int n, int fd)
{
	if (n == 2147483647)
	{
		ft_putstr_fd("2147483647", fd);
		return (1);
	}
	return (0);
}

static int	min_int_checker(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return (1);
	}
	return (0);
}

void		ft_putnbr_fd(int n, int fd)
{
	int		ten;
	int		num;

	num = 0;
	ten = 1;
	if ((n > 2147483647) || (n < -2147483648))
		return ;
	if (min_int_checker(n, fd))
		return ;
	if (max_int_checker(n, fd))
		return ;
	n = neg_checker(n, fd);
	num = n;
	if ((n >= -2147483648) && (n <= 2147483647))
	{
		while ((num = num / 10) > 0)
			ten = ten * 10;
		while (ten > 0)
		{
			ft_putchar_fd((n / ten + '0'), fd);
			n = n % ten;
			ten = ten / 10;
		}
	}
}
