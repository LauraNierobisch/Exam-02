#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int leng = 0;
	int i = 0;

	while (src[leng] != '\0')
	{
		leng++;
	}
	char *dupli = (char *)malloc(sizeof(char) *(leng + 1));
	if(dupli != NULL)
	{
		while(src[i])
		{
			dupli[i] = src[i];
			i++;
		}
		dupli[i] = '\0';
	}
	return(dupli);
}