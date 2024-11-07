#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int i = 0;

	if(tab == NULL)
	{
		return(0);
	}
	int max = tab[0];
	while(i < len)
	{

		if(tab[i] > max)
		{
			max = tab[i];
		}
		i++;
	}
			return(max);
}

int main(void)
{
	int tab[] = { 1 ,5, 2, 9, 55,-66666, 7, 9, 10};
	int len = 9;

	printf("%d", max(tab, len));
}