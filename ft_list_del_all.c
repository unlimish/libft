#include "libft.h"

void	ft_list_del_all(t_dlist *list)
{
	while (list->next != NULL)
	{
		list = list->next;
		free(list->prev);
	}
	free(list);
}
