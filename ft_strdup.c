#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*result;
	size_t	size;

	size = ft_strlen(s) + 1;
	result = malloc(size);
	if (result == NULL)
		return (NULL);
	return (ft_memcpy(result, s, size));
}
