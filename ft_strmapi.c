/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 00:34:11 by trinnguy          #+#    #+#             */
/*   Updated: 2019/08/10 00:40:17 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*fresh;

	i = 0;
	fresh = ft_strnew(str_len(s));
	if (!s || !f)
		return (NULL);
	if (!fresh)
		return (NULL);
	while (s[i])
	{
		fresh[i] = (*f)(i, s[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
