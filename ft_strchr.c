#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*ptr_s;
	char		str_c;
	size_t		len_s;

	ptr_s = (const char *)s;
	str_c = (char)c;
	len_s = ft_strlen(s) + 1;
	while (len_s != 0)
	{
		if (*ptr_s == str_c)
			return ((char *)ptr_s);
		ptr_s++;
		len_s--;
	}
	return (NULL);
}
