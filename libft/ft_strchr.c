#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdint.h>

char *ft_strchr(const char *str, int c)
{
    size_t i;
    i = 0;
    while(str[i])
    {
        if(str[i] == (char)c)
        {
            return ((char *)(str + i));
        }
        i++;
    }
    if(c == '\0')
        return((char *)str + i);
    return (NULL);
}

int main()
{
    char gizem[] = "gizem arslan";
    printf("%s", ft_strchr(gizem,'\0'));
}