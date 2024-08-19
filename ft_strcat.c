char    *ft_strcat(char *dest, char *str)
{
    int i;
    int j;

    i = 0;
    while (dest[i] != 0)
        i++;
    j = 0;
    while (str[j] != 0)
    {
        dest[i] = str[j];
        j++;
        i++;
    }
    dest[i] = 0;
    return (dest);
}