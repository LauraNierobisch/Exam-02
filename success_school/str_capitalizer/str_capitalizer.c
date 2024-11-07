#include <unistd.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 1;
	if( argc >= 2)
	{
		while(argv[j])
		{
		while(argv[j][i])
		{

			if ( i == 0 || argv[j][i-1] == ' ')
			{
				if(argv[j][i] >= 'a' && argv[j][i] <= 'z')
				argv[j][i] = argv[j][i] - 32;
			}
			else if(argv[j][i] >= 'A' && argv[j][i] <= 'Z')
				argv[j][i] = argv[j][i] + 32;
			write(1, &argv[j][i], 1);
			i++;
		}
		j++;
		i = 0;
		write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return(0);
}