#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	length;

	length = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = malloc(length);
	if (result == NULL)
		return (NULL);
	ft_memcpy(result, s1, ft_strlen(s1) + 1);
	ft_strlcat(result, s2, length);
	return (result);
}
