#include <string.h>
#include <stdio.h>

void		swap(int *x, int *y)
{
	int	tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

void		bubble_sort(int array[], int array_size)
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
			if(array[j] < array[j - 1])
				swap(&array[j], &array[j-1]);
			j--;
		}

	}
}

int main()
{
	int i = 0;
	int array[] = {1, 4, 2, 3};
	bubble_sort(array, 4);
	while (i < 4)
	{
		printf("%d\n", array[i]);
		i++;
	}

}
