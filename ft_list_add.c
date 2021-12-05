#include "libft.h"

static	t_dlist	*create_list(t_dlist *list, int value)
{
	list = ft_list_malloc();
	list->is_head = true;
	list->value = value;
	list->next = NULL;
	list->prev = NULL;
	return (list);
}

static	t_dlist	*add_element_to_list(t_dlist *list, int value)
{
	t_dlist	*last_element;
	t_dlist	*new_element;

	last_element = NULL;
	new_element = NULL;
	last_element = ft_list_go_last(list);
	new_element = ft_list_malloc();
	new_element->is_head = false;
	new_element->value = value;
	new_element->prev = last_element;
	new_element->next = NULL;
	last_element->next = new_element;
}

t_dlist	*ft_list_add(t_dlist *list, int value)
{
	int		is_list_exist;

	is_list_exist = ft_list_check(list);
	if (is_list_exist == -1)
	{
		list = create_list(list, value);
		return (list);
	}
	else
	{
		list = add_element_to_list(list, value);
		return (list);
	}
}
