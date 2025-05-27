#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void* ft_memcpy(void *dest, const void *src, size_t n)
{
   unsigned char *tempdest;
   unsigned const char *tempsrc;

    tempdest = (unsigned char*)dest;
    tempsrc = (unsigned const char*)src;
    size_t i;
    i = 0;
    while (i < n)
    {
        tempdest[i] = tempsrc[i];
        i++;
    }
    return(dest);
}

int main()
{
    char dest[] = "gizem arslan";
    char src[] = "gi";
    memcpy(dest+3,dest,4);
    memmove(src+2, src,4);
    printf("%s\n%s", dest, src);
}

/* dest 
1 2 3 4 5 
g i z e m

d gizem
s zem
*/ 