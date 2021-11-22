#include "libft.h"

t_blist	*ft_go_last_list(t_blist *list)
{
	while (list->next != NULL)
		list = list->next;
	return (list);
}
