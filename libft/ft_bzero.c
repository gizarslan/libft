#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdint.h>

void	ft_bzero(void *dest, size_t n)
{
    size_t i = 0;
    unsigned char *ptr;
    
    ptr = (unsigned char*)dest;

    while(i < n)
    {
        ptr[i] = '\0';
        i++;
    }

}

int main()
{
    int dizi[] = {1,4,5,7,6,9};
    bzero(dizi,sizeof(dizi));
    for(int i = 0; i<6 ; i++)
        printf("%d\n", dizi[i]);
}

int main()
{
    char dizi[] = "gizem arslan mükemmeldir";
    int a = strlen(dizi);
    bzero(dizi,5);
    for(int i = 0; i<a ; i++)
        printf("%c", dizi[i]);
}