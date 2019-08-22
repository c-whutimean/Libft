/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 02:04:56 by trinnguy          #+#    #+#             */
/*   Updated: 2019/07/31 02:30:04 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	int		count;
	char	*temp_str;

	i = 0;
	count = (int)n;
	temp_str = (char *)s;
	while (i <= count)
	{
		if (temp_str[i] == c)
			return (&temp_str[i]);
		i++;
	}
	return (NULL);
}
