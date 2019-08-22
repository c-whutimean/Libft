/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 19:21:50 by trinnguy          #+#    #+#             */
/*   Updated: 2019/08/05 23:04:14 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		num;
	int		neg;

	num = 0;
	neg = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' ||
				*str == '\f' || *str == '\r')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while ((*str >= '0' && *str <= '9'))
	{
		num = (10 * num) + (*str - 48);
		str++;
	}
	return (num * neg);
}