/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 00:35:09 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/03 23:52:56 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		init(int *i, int *entire)
{
	*i = 0;
	*entire = 0;
}

static void		word_length(char const *s, char c, int *i, int *word)
{
	while (s[*i] && s[*i] != c)
	{
		*i = *i + 1;
		*word = *word + 1;
	}
}

char			**ft_strsplit(char const *s, char c)
{
	int			i;
	int			entire;
	int			indiv;
	int			word;
	char		**arr;

	init(&i, &entire);
	if (!(arr = (char **)malloc(sizeof(char *) * ft_strlen(s) + 1)))
		return (NULL);
	while (s[i] && entire < (int)ft_strlen(s))
	{
		while (s[i] && s[i] == c)
			i++;
		word = 0;
		word_length(s, c, &i, &word);
		if (!(arr[entire] = (char *)malloc(sizeof(char) * (word + 1))))
			return (NULL);
		indiv = 0;
		while (word)
			arr[entire][indiv++] = s[i - word--];
		arr[entire++][indiv] = '\0';
	}
	return (arr);
}
