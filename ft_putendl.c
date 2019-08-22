/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 23:17:42 by trinnguy          #+#    #+#             */
/*   Updated: 2019/07/31 23:24:15 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char const *s);
void	ft_putchar(char c);

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
