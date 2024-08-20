size_t	isalpha(char *str)
{
	size_t i;

	i = 0;
	while (str[i] != 0 && ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')))
	{
		i++;
	}
	if (str[i] == 0)
		return (1);
	return (0);
}