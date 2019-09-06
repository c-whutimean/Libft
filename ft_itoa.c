/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 00:08:11 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/06 01:13:42 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_checker(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (0);
}

static int	neg_checker(int n)
{
	if (n < 0)
	{
		return (1);
	}
	return (0);
}

static int	temp_caller(int temp)
{
	int		len;

	len = 0;
	while (temp != 0)
	{
		temp = temp / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	int		neg;
	int		temp;
	char	*str;

	neg = neg_checker(n);
	len = n_checker(n) + temp_caller(n) + neg_checker(n);
	str = (char *)ft_memalloc(sizeof(char) * (len + 1));
	len = len - 1;
	if (n == 0)
		str[len] = '0';
	while (n != 0)
	{
		if (neg == 1)
			str[len] = ((n % 10) * -1) + '0';
		else
			str[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	if (neg == 1)
		str[len] = '-';
	return (str);
}
