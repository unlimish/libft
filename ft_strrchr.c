#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr_s;
	char		chr_c;
	int			len;
	char		*result;

	ptr_s = (const char *)s;
	chr_c = (unsigned char)c;
	len = ft_strlen(s) + 1;
	result = NULL;
	while (len > 0)
	{
		if (*ptr_s == chr_c)
			result = (char *)ptr_s;
		ptr_s++;
		len--;
	}
	return (result);
}
