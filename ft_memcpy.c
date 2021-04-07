#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;

	s1 = (unsigned char *)dest;
	s2 = (const unsigned char *)src;
	if (n == 0 || dest == src)
		return (dest);
	while (n != 0)
	{
		*s1 = *s2;
		s1++;
		s2++;
		n--;
	}
	return (dest);
}
