#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;
	size_t	dest_size;

	dest_size = size;
	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= dest_size)
		return (src_len + size);
	while (((size - dest_len - 1) != 0) && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
		size--;
	}
	dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}
