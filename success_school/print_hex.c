#include <unistd.h>

int ft_atoi(char *str)
{
	int n = 0;

	while (*str != '\0')
	{
		n = n * 10 + *str - '0';
		++str;
	}
	return (n);
}
void print_hex(int n)
{
	char hex[] = "0123456789abcdef";

	if(n >= 16)
		print_hex(n / 16);
	write(1, &hex [n % 16], 1);
}
int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		print_hex(ft_atoi(argv[1]));
		write(1, "\n", 1);
	}
	if (argc != 2)
	write(1, "\n", 1);
}