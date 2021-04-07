#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		is_minus;
	long	result;

	is_minus = 1;
	result = 0;
	while (ft_isspace(*nptr) == 1)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			is_minus = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr) != 0)
	{
		result = 10 * result + (*nptr - '0');
		nptr++;
	}
	return ((int)(result * is_minus));
}
