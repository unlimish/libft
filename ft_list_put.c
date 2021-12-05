#include "libft.h"

void	ft_list_put(t_dlist *list)
{
	char	*str;
	char	*is_head;

	while (list != NULL)
	{
		is_head = ft_itoa((int)list->is_head);
		str = ft_itoa(list->value);
		ft_putstr_fd("is_head:", STDOUT_FILENO);
		ft_putstr_fd(is_head, STDOUT_FILENO);
		ft_putstr_fd("\nstr:", STDOUT_FILENO);
		ft_putstr_fd(str, STDOUT_FILENO);
		ft_putstr_fd("\n", STDOUT_FILENO);
		free(str);
		free(is_head);
		list = list->next;
	}
}
