#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
    const unsigned char *p1 = (const unsigned char *)ptr1;
    const unsigned char *p2 = (const unsigned char *)ptr2;
    size_t i;
    i = 0;
    while(i < n)
    {
        if(p1[i] != p2[i])
            return(p1[i] - p2[i]);
        i++;
    }
    return (0);
}

int main()
{
    char arr1[] = {'a','b','\0'};
    char arr2[] = "ab";
    
    printf("%d\n%d", ft_memcmp(arr1, arr2, 5), memcmp(arr1, arr2, 5));

}