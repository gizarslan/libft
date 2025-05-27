#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdint.h>

void* ft_memchr(const void *ptr, int c, size_t n)
{
    const unsigned char *ptr1 = (const unsigned char *)ptr;
    size_t i;
    i = 0;
    while(i < n)
    {
        if(ptr1[i] == (unsigned char)c)
            return ((void *)(ptr1 + i));
        i++;
    }
    return (NULL);
}

int main()
{
    char *ptr = "gizem arslan";
    int c = 97;
    printf("%s", ft_memchr(ptr,c,12));
}