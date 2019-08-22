/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 02:41:23 by trinnguy          #+#    #+#             */
/*   Updated: 2019/07/31 22:07:32 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	int		i;
	int		num;
	char	*temp_dest;
	char	*temp_src;

	i = 0;
	num = (int)n;
	temp_dest = (char *)dest;
	temp_src = (char *)src;
	while (temp_src[i] != '\0' || num > 0)
	{
		temp_dest[i] = temp_src[i];
		i++;
		num--;
	}
	return ((void *)temp_dest);
}
