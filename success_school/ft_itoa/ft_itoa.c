#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	char *s = (char *)malloc(12 * sizeof(char));
	if(!s)
	return(0);
	int i = 0;
	int power = 0;
	int nb;

	if(nbr < 0)
	{
		s[0] = '-';
		i++;
		nbr *= -1;
	}
	nb = nbr;
	while( nb>= 10)
	{
		power++;
		nb /= 10;
	}
	s[i + power + 1] = '\0';
	while (nbr > 10)
	{
		s[i + power] = nbr % 10 + 48;
		power --;
		nbr /= 10;
	}
	s[i] = nbr + 48;
	return(s);
}