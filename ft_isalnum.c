#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) == 1 || ft_isalpha(c) == 1);
}
