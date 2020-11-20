#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_word(char* str, char sym)
{
    int i = 0;
    int count = 0;
    while(str[i])
    {
        if (str[i] == sym && !(str[i+1] == sym && !(str[i-1] == sym)))
            count++;
        i++;
    }
    return (count);
}

char **ft_split(char const *s, char c)
{
    char**  arr_words;
    int     words;
    size_t  len_word;
    int     i;

    len_word = 0;
    i = 0;

    words = count_word(s, c);

    if (!s || !c)
        return (NULL);
    if (!(arr_words = (char**)malloc(sizeof(char*) * words)))
        return (NULL);

    while(s[i])
        if (s[i] != c)
            len_word++;
        if (s[i] == c)
            arr_words[]
        
}
