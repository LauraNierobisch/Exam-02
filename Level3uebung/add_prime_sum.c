#include <unistd.h>
#include <stdlib.h>

int is_prime (int num)
{
	if (num < 2)
	return(0);

	int i = 2;
	while (i * i <= num)
	{
		if (num % i == 0)
				return 0;
		i++;
	}
	return 1;
}

int ft_atoi(const char *str)
{
	int result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return result;
}
void ft_putnbr(int n)
{
	char c;
	if (n >= 10)
		ft_putnbr(n/ 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int main(int  argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "0\n",2);
		return 0;
	}
	int n = ft_atoi(argv[1]);
	if(n <= 0)
{
	write(1, "0\n", 2);
	return 0;
}
int sum = 0;
int i = 2;
while (i <= n)
{
	if(is_prime(i))
		sum += i;
	i ++;
}
ft_putnbr(sum);
write(1, "\n", 1);
return 0;
}