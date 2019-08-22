/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 23:31:54 by trinnguy          #+#    #+#             */
/*   Updated: 2019/08/12 00:08:27 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strjoin(char const *s1, char const *s2)
{
	char		*join;
	size_t		len_s1;
	size_t		len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	join = ft_strnew(len_s1 + len_s2);
	if (!join)
		return (NULL);
	ft_strcpy(join, s1);
	ft_strcat(join, s2);
	return (join);
}
