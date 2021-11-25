#include "libft.h"

void	ft_list_put(t_dlist *list)
{
	while (list != NULL)
	{
		ft_putstr_fd(ft_itoa(list->value), STDOUT_FILENO);
		ft_putstr_fd("\n", STDOUT_FILENO);
		list = list->next;
	}
}