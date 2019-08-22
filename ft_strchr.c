/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 22:47:05 by trinnguy          #+#    #+#             */
/*   Updated: 2019/07/27 01:07:39 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *sentence, int ch)
{
	int i;

	i = 0;
	while (sentence[i])
	{
		if (sentence[i] == ch)
			return (char *)&sentence[i];
		i++;
	}
	if (ch == '\0')
		return (char *)&sentence[i];
	return (0);
}
