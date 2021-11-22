#include "libft.h"

void	ft_put_list(t_blist *list)
{
	while (list != NULL)
	{
		ft_putstr_fd(ft_itoa(list->value), STDOUT_FILENO);
		ft_putstr_fd("\n", STDOUT_FILENO);
		list = list->next;
	}
}
