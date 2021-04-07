#include "libft.h"

static	size_t	count_set_chr_front(char const *s1, char const *set)
{
	size_t	len;

	len = 0;
	while (s1[len] != '\0')
	{
		if (!ft_strchr(set, s1[len]))
			break ;
		len++;
	}
	return (len);
}

static	size_t	count_set_chr_back(char const *s1, char const *set,
size_t front_len)
{
	size_t	len;

	len = ft_strlen(s1);
	while (len > front_len)
	{
		if (!ft_strchr(set, s1[len - 1]))
			break ;
		len--;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	front_set_len;
	size_t	back_set_len;
	size_t	result_len;

	if (!set || !s1)
		return (ft_strdup(s1));
	front_set_len = count_set_chr_front(s1, set);
	back_set_len = count_set_chr_back(s1, set, front_set_len);
	if (front_set_len == back_set_len)
		return (ft_strdup(""));
	result_len = back_set_len - front_set_len + 1;
	result = malloc(result_len);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, (char *)s1 + front_set_len, result_len);
	return (result);
}
