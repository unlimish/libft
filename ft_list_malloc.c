#include "libft.h"

t_dlist	*ft_list_malloc(void)
{
	t_dlist	*list;

	list = (t_dlist *)malloc(sizeof(t_dlist));
	if (list == NULL)
		exit(-1);
	return (list);
}
