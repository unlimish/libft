#include "libft.h"

t_dlist	*ft_list_add(t_dlist *list, int value)
{
	int		is_list_exist;
	t_dlist	*last_element;
	t_dlist	*new_element;

	last_element = NULL;
	new_element = NULL;
	is_list_exist = ft_list_check(list);
	if (is_list_exist == -1)
	{
		list = ft_list_malloc();
		list->value = value;
		list->next = NULL;
		list->prev = NULL;
		return (list);
	}
	else
	{
		last_element = ft_list_go_last(list);
		new_element = ft_list_malloc();
		new_element->value = value;
		new_element->prev = last_element;
		new_element->next = NULL;
		last_element->next = new_element;
		return (list);
	}
}
