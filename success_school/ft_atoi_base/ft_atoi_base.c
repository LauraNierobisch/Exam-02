#include <stdio.h>

int ft_isblank(char c)
{
	if(c <= 32)
		return(1);
	return(0);
}

int ft_isvalid(char c, int base)
{
	char digits[17] = "0123456789abcdef";
	char digits2[17] = "0123456789ABCDEF";

	while(base--)
		if(digits[base] == c || digits2[base] == c)
			return(1);
		return(0);
}
int ft_value_of(char c)
{
	if(c > '0' && c <= '9')
		return(c - '0');
	else if (c >= 'a' && c <= 'f')
		return(c - 'a' + 10);
	else if(c >= 'A' && c <= 'F')
		return(c - 'A' + 10);
	return(0);
}
int ft_atoi_base(const char *str, int strbase)
{
	int result;
	int sign = 1;

	result = 0;
	while(ft_isblank(*str))
		str++;
	if(*str == '-')
	{
		str++;
		sign = -1;
	}
	if(*str == '+')
		str++;
	while(ft_isvalid(*str, strbase))
	{
		result = result *strbase +ft_value_of(*str);
		str++;
	}
	return(result * sign);
}
