#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*s1;
	unsigned char		*s2;
	size_t				i;

	if (dest == NULL && src == NULL)
		return (NULL);
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*(s1 + i) = *(s2 + i);
		if (*(s1 + i) == (unsigned char)c)
			return ((void *)s1 + i + 1);
		i++;
	}
	return (NULL);
}
