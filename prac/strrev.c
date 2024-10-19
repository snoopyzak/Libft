#include <stdio.h>

char   *ft_strrev(char *strmgad) {

    int     i;
    int     j;
    char    temp;

    i = 0;
    while (strmgad[i])
            i++;
    i -= 1;
    j = 0;
    while (j<i) {
        temp = strmgad[j];
        strmgad[j] = strmgad[i];
        strmgad[i] = temp;
        j++;
        i--;
    }
    return (strmgad);

}

int main(void) {

    char    hh[] = "ana mgad 9lbni piliz hh";
    printf("%s\n", ft_strrev(hh));

}
