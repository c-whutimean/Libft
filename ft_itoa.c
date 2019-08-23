/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 21:27:03 by trinnguy          #+#    #+#             */
/*   Updated: 2019/08/22 21:28:22 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	void	ft_bzero2(char *str, int n)
{
	int			i;
	char		*temp;

	i = 0;
	temp = str;
	while (i < n)
	{
		temp[i] = '\0';
		i++;
	}
}

static	int		neg_checker(int n)
{
	if (n < 0)
	{
		if (n == -2147483647)
		{
			ft_putstr("-2147483647\n");
			return (n);
		}
		n = n * -1;
		ft_putstr("-");
	}
	return (n);
}

static int		init(int n, int *tens, int *index)
{
	int temp;

	*tens = 1;
	*index = 0;
	temp = neg_checker(n);
	return (temp);
}

char			*ft_itoa(int n)
{
	int			num;
	int			tens;
	int			index;
	char		*itoa;

	n = init(n, &tens, &index);
	num = n;
	while (n > 9)
	{
		n = n / 10;
		tens = tens * 10;
		index++;
	}
	if (!(itoa = (char *)malloc(sizeof(*itoa) * (index + 1))))
		return (NULL);
	ft_bzero2(itoa, index + 1);
	n = 0;
	while (n <= index)
	{
		itoa[n++] = (num / tens) + '0';
		num = num % tens;
		tens = tens / 10;
	}
	itoa[n] = '\0';
	return (itoa);
}
