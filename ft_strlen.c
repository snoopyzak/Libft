#include <stddef.h>

int ft_strlen(char  *str)
{
    int i;

    i = 0;
    if (str == NULL)
	return (0);
    while (str[i] != 0)
        i++;
    return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char *s = NULL;
	printf("%u", ft_strlen(s));
}*/
