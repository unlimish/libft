#include "libft.h"

void	*ft_memset(void *buf, int c, size_t n)
{
	unsigned char	*addr;
	unsigned char	ch;

	addr = (unsigned char *)buf;
	ch = (unsigned char)c;
	while (n != 0)
	{
		*addr = ch;
		addr++;
		n--;
	}
	return (buf);
}
