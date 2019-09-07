/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trinnguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 00:35:09 by trinnguy          #+#    #+#             */
/*   Updated: 2019/09/07 01:52:36 by trinnguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		init(int *i, int *entire, int *word)
{
	*i = 0;
	*entire = 0;
	*word = 0;
}

static void		word_length(char const *s, char c, int *i, int *word)
{
	while (s[*i] && s[*i] != c)
	{
		*i = *i + 1;
		*word = *word + 1;
	}
}

static int		num_words(char const *s, char c)
{
	int			n;
	int			i;

	n = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			n++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (n);
}

char			**ft_strsplit(char const *s, char c)
{
	int			i;
	int			entire;
	int			indiv;
	int			word;
	char		**arr;

	init(&i, &entire, &word);
	if (!s)
		return (NULL);
	if (!(arr = (char **)malloc(sizeof(char *) * (num_words(s, c) + 1))))
		return (NULL);
	while (s[i] && entire < num_words(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		word_length(s, c, &i, &word);
		if (!(arr[entire] = (char *)malloc(sizeof(char) * (word + 1))))
			return (NULL);
		indiv = 0;
		while (word)
			arr[entire][indiv++] = s[i - word--];
		arr[entire++][indiv] = '\0';
	}
	arr[entire] = NULL;
	return (arr);
}
