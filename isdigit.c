size_t	isalpha(char *str)
{
	size_t i;

	i = 0;
	while (str[i] != 0 && (str[i] >= '0' && str[i] <= '9'))
		i++;
	if (str[i] == 0)
		return (1);
	return (0);
}