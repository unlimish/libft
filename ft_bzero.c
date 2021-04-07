#include "libft.h"

void	ft_bzero(void *s, size_t size)
{
	unsigned char	*addr;

	addr = (unsigned char *)s;
	while (size != 0)
	{
		*addr = 0;
		addr++;
		size--;
	}
}
