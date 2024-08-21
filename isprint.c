#include <string.h>

size_t	isprint(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!(str[i] >= 32 && str[i] < 127))
			return (0);
		i++;
	}
	return (1);
}