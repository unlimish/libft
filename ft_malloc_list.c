#include "libft.h"

t_blist	*ft_malloc_list(void)
{
	t_blist	*list;

	list = (t_blist *)malloc(sizeof(t_blist));
	if (list == NULL)
		exit(ERR);
	return (list);
}
