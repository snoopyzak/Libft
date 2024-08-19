#include <stdlib.h>

char    *ft_strdup(char *str)
{
	char	*dest;
	int		i;

	i = 0;
	while (str[i] != 0)
		i++;
	dest = (char	*)malloc(sizeof(char) * i);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (str[i] != 0)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}