/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 23:16:47 by trinnguy          #+#    #+#             */
/*   Updated: 2019/08/09 23:29:20 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*fresh;

	i = 0;
	fresh = ft_strnew(ft_strlen(s));
	if (!s || !f)
		return (NULL);
	if (!fresh)
		return (NULL);
	while (s[i])
	{
		fresh[i] = (*f)(s[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
