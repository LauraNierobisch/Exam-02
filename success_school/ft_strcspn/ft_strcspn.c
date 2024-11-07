#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j = 0;

	while(s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
		if(s[i] == reject[j])
			return(i);
		j++;
		}
		i++;
	}
	return(i);
}
// int	main(void)
// {
// 	const char str[] = "test";
// 	const char reject[] = "es";

// 	size_t result = ft_strcspn(str, reject);

// 	printf("The first occurrence of any character from '%s' in '%s' is at position: %zu\n", reject, str, result);

// 	return 0;
// }