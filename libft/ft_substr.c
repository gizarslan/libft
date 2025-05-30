#include <stdio.h>
#include <stdlib.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    i = 0;
    if(!s || s[0] == '\0')
        return(NULL);
    char *temp = (char *)malloc(len + 1);
    if(!temp)
        return(NULL);

    while (i < len && s[start + i])
    {   
        temp[i] = s[start+i];
        i++;
    }
    temp[i] = '\0';
    return (temp);
}