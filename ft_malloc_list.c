#include "libft.h"

t_dlist	*ft_malloc_list(void)
{
	t_dlist	*list;

	list = (t_dlist *)malloc(sizeof(t_dlist));
	if (list == NULL)
		exit(ERR);
	return (list);
}
