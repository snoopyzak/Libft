#include <stdio.h>
#include <stdlib.h>

char   *ft_strrev(char *strmgad) {

    int     i;
    int     j;
    int     len;
    char    *strmglob;

    i = 0;
    while (strmgad[i])
            i++;
    strmglob = (char    *)malloc(sizeof(char) * i);
    if (strmglob == NULL)
            return (NULL);
    i -= 1;
    len = i;
    j = 0;
    while (j<=len) {
        strmglob[j] = strmgad[i];
        j++;
        i--;
    }
    strmglob[j] = 0;
    return (strmglob);

}

int main(void) {

    char    *hh = ft_strrev("ana mgad 9lbni piliz hh");
    printf("%s", hh);
    free(hh);

}
