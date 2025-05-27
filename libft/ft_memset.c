#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdint.h>

void*   ft_memset(void *dest, int c, size_t n)
{
    unsigned char   *ptr = dest;
    unsigned char x = c;
    size_t i;
    i = 0;
    while(i < n)
    {
        ptr[i] = x;
        i++;
    }
    return(dest);
}


int main() {
    int8_t dizi[] = {1,1,1,1,1,1,1,1};
    int x = 5;
    //ft_memset(dizi, x, 12);
    memset(dizi,5,sizeof(dizi));

    size_t a = 0;
    while(a<8)
    {
        printf("%d\n", dizi[a]);
        a++;
    }
}