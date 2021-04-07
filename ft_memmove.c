#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (const unsigned char *)src;
	if (ptr_dest > ptr_src)
	{
		ptr_dest += n - 1;
		ptr_src += n - 1;
		while (n != 0)
		{
			*ptr_dest = *ptr_src;
			ptr_dest--;
			ptr_src--;
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
