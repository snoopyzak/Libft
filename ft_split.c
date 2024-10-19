#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/*

@brief
    we're trying to make a fucntion that splits a string into substrings
    and returns the pointer to the first substring
@params
    we need to make several functions to get this job done:
        - a function to count how many words in a string
        - one to check if we face a separator in the main string
        - one to chop the substring and put it in its own string
        - one to free the substrings and the main string in case of error
        - and finally one to merge between all of these functions and make them one
          fully functionnable program
        - that should be all that's needed! get to work !!

*/

int ft_strchr(char c, char *charset) {

    int i;
    i = 0;
    while (charset[i] != 0)
    {
        if (c == charset[i])
                return 1;
        i++;
    }
    return 0;
}

int count_words(char *string, char *charset) {
    int count = 0;
    int i = 0;

    while (string[i] != 0) {
        while (string[i] && ft_strchr(string[i], charset))
            i++;
        if (string[i] && !ft_strchr(string[i], charset))
            count++;
        while (string[i] && !ft_strchr(string[i], charset))
            i++;
    }
    return count;
}

char    *substring(char *str, int first, int last) {

    int     i;
    char    *sub;
    
    sub = (char *)malloc(sizeof(char) * (last - first + 1));
    if (sub == NULL)
        return NULL;
    i = 0;
    while (first < last)
        sub[i++] = str[first++];
    sub[i] = 0;
    return (sub);

}

void free_strings(char **strs, int k) {
    for (int i = 0; i < k; i++) {
        free(strs[i]);
    }
    free(strs);
}

char    **splittage(char *str, char *charset) {

    int     i;
    int     l;
    int     k;
    char    **strs;

    strs = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
    if (strs == NULL)
        return NULL;
    i = 0;
    l = 0;
    k = 0;
    while (k < count_words(str, charset)) {
            
        while (str[i] && ft_strchr(str[i], charset))
            i++;
        l = i;
        while (str[l] && !ft_strchr(str[l], charset))
            l++;
        strs[k] = substring(str, i, l);
        if (strs[k] == NULL) {
            free_strings(strs, k);
            return NULL;
        }
        k++;
        i = l;

    }
    strs[k] = NULL;
    return strs;

}

int main(void)
{
    int i = 0;
    char str[] = "hi this is a test string count me xd";
    char **result;
    result = splittage(str, " ,");
    if (result == NULL) {

        printf("allocation for the resulting strings in main was incorrect xd.");
        return 1;

    }
    while (i < count_words(str, " ,")) {

        printf("%s\n", result[i]);
        free(result[i]);
        i++;

    }
    free(result);
    return 0;
}
