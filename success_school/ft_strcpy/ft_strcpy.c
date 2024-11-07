#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		s1[i]= s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s2);
}

// int main()
// {
// 	char str[6];
// 	char str1[6] = "hallo";

// 	ft_strcpy(str, str1);
// 	printf("%s", str);
// 	return(0);
// }