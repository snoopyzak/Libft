#include <stddef.h>

char    *strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i] != 0)
    {
        if (c == s[i])
            return ((char    *)&s[i]);
        i++;
    }
    return (NULL);
}