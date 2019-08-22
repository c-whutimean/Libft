/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 23:26:52 by trinnguy          #+#    #+#             */
/*   Updated: 2019/08/09 23:16:12 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strnequ(char const *s1, char const *s2, size_t len)
{
	if (s1 == NULL && s2 == NULL)
		return (1);
	if (s1 == NULL || s2 == NULL)
		return (0);
	return (!ft_strncmp(s1, s2, n));
}
