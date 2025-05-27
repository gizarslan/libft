#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* ft_calloc(size_t num, size_t size)
{
    void *temp;
    size_t i;
    
    i = 0;
    temp = malloc(num * size);
    if (!temp)
        return(NULL);
    ft_memset(temp, 0, num * size);
    return (temp);
}

int main()
{
    int *gizem =  ft_calloc(5,sizeof(int));
    int i = 0;
    while (i<5){
        gizem[i] = 1;
        i++;
    }
    int *erol = calloc(5,sizeof(int));
    int j = 0;
    while (j<5){
        erol[j] = 2;
        j++;
    }
    i = 0;
    while(i<5)
    {
        printf("%d", gizem[i]);
        i++;
    }
    j = 0;
    while(j<5)
    {
        printf("\n%d", erol[j]);
        j++;
    }
    
}