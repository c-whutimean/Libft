/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 04:05:09 by trinnguy          #+#    #+#             */
/*   Updated: 2019/08/01 00:49:42 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memcpy(void *dest, const void *src, size_t len);

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*temp_src;
	char	*temp_dest;

	temp_src = (char *)src;
	temp_dest = (char *)dest;
	if (src < dest)
	{
		while (len > 0)
		{
			temp_dest[len - 1] = temp_src[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(dest, src, len);
	return ((void *)temp_dest);
}
