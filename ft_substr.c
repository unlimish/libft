#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	char	*ptr_result;

	if (s == NULL)
		return (NULL);
	(len > ft_strlen(s + start)) ? (result = malloc(ft_strlen(s + start) + 1)) :
		(result = malloc(len + 1));
	if (result == NULL || start >= ft_strlen(s))
		return (result);
	ptr_result = result;
	while (start != 0 && len != 0)
	{
		s++;
		start--;
	}
	while (len != 0 && *s != '\0')
	{
		*result = *s + start;
		result++;
		s++;
		len--;
	}
	*result = '\0';
	return (ptr_result);
}
