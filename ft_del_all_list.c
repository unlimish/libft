#include "libft.h"

void	ft_del_all_list(t_dlist *list)
{
	while (list->next != NULL)
	{
		list = list->next;
		free(list);
	}
	free(list);
}
