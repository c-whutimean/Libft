/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 00:08:11 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/06 00:42:45 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa2(int n)
{
	int		len;
	int		neg;
	int		temp;
	int		i;
	char	*str;

	len = 0;
	neg = 0;
	i = 0;
	temp = n;
	if (n == 0 || n < 0)
	{
		len = 1;
		if (n < 0)
			neg = 1;
	}
	while (temp != 0)
	{
		temp = temp / 10;
		len++;
	}
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

int main (void)
{
	int num;

	num = -2147483648;
	printf("Output: %s\n", ft_itoa2(num));
	return (0);
}
