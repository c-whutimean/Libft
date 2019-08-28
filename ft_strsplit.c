#include "libft.h"

static char		*ft_strtrim2(char const *s, char c)
{
	int			i;
	int			back;
	char		*copy;

	i = 0;
	back = 0;
	if (!s)
		return (NULL);
	while (*s == c)
		s++;
	i = ft_strlen(s) - 1;
	if (i == -1)
		return (ft_strnew(0));
	while (s[i--] == c)
		back++;
	copy = ft_strnew(ft_strlen(s) - back);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < (int)ft_strlen(s) - back)
	{
		copy[i] = s[i];
		i++;
	}
	return (copy);
}

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
	while (s[i] && entire < ft_strlen(s))
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
