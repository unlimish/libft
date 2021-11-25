#include "libft.h"

t_dlist	*ft_list_go_last(t_dlist *list)
{
	while (list->next != NULL)
		list = list->next;
	return (list);
}
