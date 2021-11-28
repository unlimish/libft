#include "libft.h"

void	ft_list_put(t_dlist *list)
{
	char *str;
	while (list != NULL)
	{
		str = ft_itoa(list->value);
		ft_putstr_fd(str, STDOUT_FILENO);
		ft_putstr_fd("\n", STDOUT_FILENO);
		free(str);
		list = list->next;
	}
}
