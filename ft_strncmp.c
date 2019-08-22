/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 01:34:55 by trinnguy          #+#    #+#             */
/*   Updated: 2019/08/08 21:10:49 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int i;

	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i])
	{
		if (str1[i] == '\0')
			return (0);
		i++;
		if (i == n)
			return (0);
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
