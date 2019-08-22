/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 03:07:34 by trinnguy          #+#    #+#             */
/*   Updated: 2019/07/29 03:58:35 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, void *src, int ch, size_t n)
{
	int		i;
	int		num;
	char	*temp_dest;
	char	*temp_src;

	i = 0;
	num = (int)n;
	temp_dest = (char *)dest;
	temp_src = (char *)src;
	while (i < num)
	{
		temp_dest[i] = temp_src[i];
		if (temp_src[i] == ch)
			return (&dest[i + 1]);
		i++;
	}
	return (NULL);
}
