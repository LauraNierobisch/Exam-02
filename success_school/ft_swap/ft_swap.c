void	ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
// #include <stdio.h>
// int main()
// {
// 	int a = 5;
// 	int b = 2;

// 	ft_swap(&a, &b);
// 	printf("%i, %i",a, b );
// }