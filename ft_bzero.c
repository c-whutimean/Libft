/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 02:18:01 by trinnguy          #+#    #+#             */
/*   Updated: 2019/08/08 00:11:20 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *str, size_t n)
{
	int		i;
	char	*temp;

	i = 0;
	temp = (char *)str;
	while (i < n)
	{
		temp[i] = '\0';
		i++;
	}
}
