#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr_s;
	unsigned char		ptr_c;

	ptr_s = (const unsigned char *)s;
	ptr_c = (unsigned char)c;
	while (n != 0)
	{
		if (ptr_c == *ptr_s)
			return ((void *)ptr_s);
		ptr_s++;
		n--;
	}
	return (NULL);
}
