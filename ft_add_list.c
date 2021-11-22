#include "libft.h"

t_dlist	*ft_add_list(t_dlist *list, int value)
{
	int		is_list_exist;
	t_dlist	*last_element;
	t_dlist	*new_element;

	last_element = NULL;
	new_element = NULL;
	is_list_exist = ft_check_list(list);
	if (is_list_exist == -1)
	{
		list = ft_malloc_list();
		list->value = value;
		list->next = NULL;
		list->prev = NULL;
		return (list);
	}
	else
	{
		last_element = ft_go_last_list(list);
		new_element = ft_malloc_list();
		new_element->value = value;
		new_element->prev = last_element;
		new_element->next = NULL;
		last_element->next = new_element;
		return (list);
	}
}
