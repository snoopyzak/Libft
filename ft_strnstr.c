#include <string.h>

char	*ft_strnstr(char *big, char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (big[i] != 0 && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i+j] == little[j])
				j++;
			if (little[j] == 0)
				return (&big[(unsigned int)i]);
			i += j;
		}
		else
			i++;
	}
	return (big);
}

#include <stdio.h>
int	main()
{
	char b[] = "this is my string";
	char l[] = "my";

	printf("%s", ft_strnstr(b, l, 9));
}