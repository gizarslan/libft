#include <stdio.h>
#include "LIBFT.H"

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

char* ft_strrchr(const char *str, int c)
{
    size_t i = ft_strlen(str) - 1;
    if(c == '\0')
        return((char *)str + i + 1);
    while(str[i])
    {
        if(str[i] == (char)c)
        {
            return ((char *)(str + i));
        }
        i--;
    }
    return (NULL);
}
int main()
{
    char gizem[] = "gizem arslan";
    printf("%s", ft_strrchr(gizem,'\0'));
} 
