#include <string.h>
#include <stdio.h>

void	swap(int *x, int *y)
{
	int	tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

void	bubble_sort(int array[], int array_size)
{
	int	i;
	int	j;

	i = 0;
	while (i < array_size - 1)
	{
		j = array_size - 1;
		i++;
		while (j >= i + 1)
		{
			if (array[j] < array[j - 1])
				swap(&array[j], &array[j - 1]);
			j--;
		}
	}
}
