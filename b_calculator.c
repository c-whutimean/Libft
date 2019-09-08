/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_calculator.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 22:19:16 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/07 22:19:21 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*b_calculator(int a, int b, char op)
{
	int		answer;
	char	*ans;

	answer = 0;
	ans = 0;
	if (op == '*')
		answer = a * b;
	if (op == '/')
		answer = a / b;
	if (op == '+')
		answer = a + b;
	if (op == '-')
		answer = a - b;
	if (op == '%')
		answer = a % b;
	ans = ft_itoa(answer);
	return (ans);
}
