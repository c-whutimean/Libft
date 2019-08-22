/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 04:30:22 by trinnguy          #+#    #+#             */
/*   Updated: 2019/07/25 04:41:39 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char c);
int	ft_isalpha(int c);

int ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
	   return (1);
	else
		return (0);	
}
