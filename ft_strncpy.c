char	*ft_strncpy(char *dest, char *src, int n)
{
    int i;

    i = 0;
    if (i == n)
        return (0);
    while (src[i] != 0 && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    return (dest);
}