#include "libft.h"

size_t	u_count_len(unsigned int n)
{
	size_t	i;

	i = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_utoa(unsigned int n)
{
	size_t	len;
	size_t	tmp_len;
	char	*result;

	len = u_count_len(n);
	tmp_len = len;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	if (n == 0)
		result[0] = '0';
	while (n != 0)
	{
		len--;
		result[len] = n % 10 + '0';
		n /= 10;
	}
	result[tmp_len] = '\0';
	return (result);
}
