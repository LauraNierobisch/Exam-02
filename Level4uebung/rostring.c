
#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*str;
	char	*start;
	char	*end;

	if (argc == 2)
	{
		str = argv[1];
		while (*str == ' ' || *str == '\t')
			str++;
		start = str;
		while (*str && *str != ' ' && *str != '\t')
			str++;
		end = str;
		while (*str == ' ' || *str == '\t')
			str++;
		if (*str)
		{
			while (*str)
			{
				write(1, str, 1);
				str++;
			}
			write(1, " ", 1);
		}
		while (start < end)
		{
			write(1, start, 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
