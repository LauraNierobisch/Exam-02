#include <stdlib.h>

int *ft_range(int start, int end)
{
	int *range;
	int i = 0;
	int step = 1;
	int n = end - start;

	if (n < 0)
		(n *= -1);
	n++;

	range = (int *)malloc(sizeof(int) * n);
	if (range)
	{
		if (start > end)
			step = -1;
		while (i < n)
		{
			range[i] = start;
			start += step;
			i++;
		}
	}
	return (range);
}