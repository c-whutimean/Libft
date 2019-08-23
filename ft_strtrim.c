/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 14:36:48 by trinnguy          #+#    #+#             */
/*   Updated: 2019/08/23 01:47:16 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strtrim(char const *s)
{
	int			i;
	int			back;
	char		*copy;

	i = 0;
	back = 0;
	if (!s)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	i = ft_strlen(s) - 1;
	if (i == -1)
		return (ft_strnew(0));
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i--;
		back++;
	}
	copy = ft_strnew(ft_strlen(s) - back);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < (int)ft_strlen(s) - back)
		copy[i++] = s[i++];
	return (copy);
}
