#include "libft.h"

static	size_t	count_words(char const *s, char c)
{
	size_t	amount;
	size_t	i;

	amount = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (amount == 0 && s[i] != c)
			amount++;
		else if (s[i] != c && s[i - 1] == c)
			amount++;
		i++;
	}
	return (amount);
}

static	size_t	count_word_len(char const *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	char		**result;
	size_t		amount_words;

	i = 0;
	amount_words = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (amount_words + 1));
	if (result == NULL)
		return (NULL);
	result[amount_words] = NULL;
	while (i < amount_words)
	{
		while (*s == c)
			s++;
		result[i] = malloc(sizeof(char) * (count_word_len(s, c) + 1));
		j = 0;
		while (*s != c && *s)
			result[i][j++] = *s++;
		result[i][j] = '\0';
		i++;
	}
	return (result);
}
