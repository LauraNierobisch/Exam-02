#include <unistd.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int flag = 0;

	if(argc == 2)
	{
		while (argv[1][i])
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				flag = 1;
				argv[1][i] = (argv[1][i] + 32);
			}
			if(flag)
			{
				write(1, "_", 1);
				flag = 0;
			}

			write(1, &argv[1][i], 1);


			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}