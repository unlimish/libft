#include "libft.h"

t_dlist	*ft_go_last_list(t_dlist *list)
{
	while (list->next != NULL)
		list = list->next;
	return (list);
}
