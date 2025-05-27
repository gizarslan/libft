#include <stdlib.h>
#include <stdio.h>

size_t ft_strlen(const char *str)
{
    size_t i;
    i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}

int main()
{
    char *gizem = "\0";
    printf("%zu", ft_strlen(gizem));
}