int	ft_atoi_base(const char *nbr, int str_base)
{
	int sign = 1;
	int n = 0;
	if (str_base < 2 || str_base > 16)
		return(0);
	while (*nbr >= 9 && *nbr <= 13 || *nbr == 32)
	{
		nbr ++;
	}
	if(*nbr == '+')
		nbr ++;
	if(*nbr == '-')
	{
		sign = -1;
		nbr++;
	}

	while (*nbr != '\0')
	{
		if(*nbr >= '0' && *nbr <= '9')
		{
			n = n * str_base  + *nbr - '0';
			nbr++;
		}
		else if (*nbr >= 'a' && *nbr <= 'f')
		{
			n = n * str_base + *nbr - 'a' + 10;
			nbr++;
		}
		else if (*nbr >= 'A' && *nbr <= 'F')
		{
			n = n * str_base + *nbr - 'A' + 10;
			nbr++;
		}
		else
		return(0);
	}
	return(n * sign);
}
#include <stdio.h>

int main()
{
	char str[] = "f";
	printf("%i \n", ft_atoi_base(str, 16));
}