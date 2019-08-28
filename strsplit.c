#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

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
	while (s[i] == c)
	{
		i--;
		back++;
	}
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

static int	word_count(char const *s, char c)
{
	int i;
	int len;
	int words;

	len = ft_strlen(s);
	i = 0;
	words = 0;
	while (i <= len + 1)
	{
		if (s[i + 1] == c || s[i] == '\0')
			words++;
		while(s[i + 1] == c)
			i++;
		i++;
	}
	return(words);
}

char		**ft_strsplit(char const *s, char c)
{
	int words;

	s = ft_strtrim2(s, c);
	printf("After strtrim the string is:\n\n%s\n\n", s);
	words = word_count(s, c);
	printf("Word count = %d\n\n", words);
	
	int		i;
	int		first_ptr;
	int		indiv;
	int		entire_len;
	int		word_len;
	char	**word_arr;

	i = 0;
	first_ptr = 0;
	entire_len = 0;
	if (!s)
		return (NULL);
	entire_len = ft_strlen(s);
	if(!(word_arr = (char **)malloc(sizeof(char *) * entire_len + 1)))
		return (NULL);
	while (s[i] && first_ptr < entire_len)
	{
		while (s[i] && s[i] == c)
			i++;
		word_len = 0;
		while (s[i] && s[i] != c)
		{
			word_len++;
			i++;
		}
		if(!(word_arr[first_ptr] = (char *)malloc(sizeof(char) * (word_len + 1))))
			return (NULL);
		indiv = 0;
		while (word_len)
			word_arr[first_ptr][indiv++] = s[i - word_len--];
		word_arr[first_ptr++][indiv] = '\0';
	}
	return(word_arr);
}

int main(void)
{

	int	i = 0;
	char **split_me;

	split_me = ft_strsplit("++I+dare+you+to+split+me!++", '+');
	while (i < 6)
	{
		printf("Word %d: %s\n", i, split_me[i]);
		i++;
	}
	return (0);
}

