#include <unistd.h>

int	main(int argc, char *argv[])
{
	int i = 0;
	int end = 0;
	int begin = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			i++;
		while (i >= 0)
		{
			while (argv[1][i] == ' ' || argv[1][i] == '\t'|| argv[1][i] == '\0')
				i--;
			end = i;
			while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
				i--;
			begin = i + 1;
			int flag = begin;
			while (begin <= end)
			{
				write(1, &argv[1][begin], 1);
				begin++;
			}
			if(flag != 0)
			write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}