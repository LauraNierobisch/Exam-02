#include <unistd.h>

void	ft_write(int number)
{
char str[10] = "0123456789";
 if (number > 9)
{
	ft_write(number/ 10);
}
 write(1, &str[number % 10], 1);
}
int main(void)
{
int i = 1;
while (i <= 100)
{
	if (i % 3 == 0)
	{
		write(1, "fizz", 4);
	}
	else if (i % 5 == 0)
	{
		write(1, "buzz", 4);
	}
	else if (i % 3 == 0 && i % 5 == 0)
	{
		i ++;
		write(1, "fizzbuzz", 8);
	}
	else
		ft_write(i);
	i++;
	write(1,"\n", 1);
}
}

