/* ************************************************************************** */
*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 23:30:03 by trinnguy          #+#    #+#             */
/*   Updated: 2019/08/21 23:21:37 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putstr_fd(char const *s, int fd);
void		ft_putchar_fd(char c, int fd);

void		ft_putnbr_fd(int n, int fd)
{
	char	out;
	int		ten;
	int		num;

	out	= 0;
	num = 0;
	ten = 1;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr_fd("-2147483648\n", fd);
			return ;
		}
		n = n * -1;
		ft_putchar_fd('-', fd);
	}
	num = n;
	while (n > 9)
	{
		n = n / 10;
		ten = ten * 10;
	}
	if (ten != 0)
	{
		out = num / ten;
		out = out + '0';
		ft_putchar_fd(out, fd);
		num = num % ten;
		ten = ten / 10;
	}
}
