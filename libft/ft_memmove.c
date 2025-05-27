#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char *tempdst;
	const unsigned char *tempsrc;

	tempdst = (unsigned char *)dst;
	tempsrc = (const unsigned char *)src;

	if (tempdst[i] < tempsrc[i])
	{
		i = 0;
		while (i < len)
		{
			tempdst[i] = tempsrc[i];
			i++;
		}
	}
	else
	{
		i = len;
		while(i > 0)
		{
			i--;
			tempdst[i] = tempsrc[i];
		}
	}
	return(dst);
}

int main()
{
    char gizem[] = "gizem arslan";
	char erol [] = "gizem arslan";
    printf("%s\n", memmove(gizem, gizem, sizeof(char)*4));
    printf("%s\n\n", gizem);
    printf("%s\n", ft_memmove(erol, erol, sizeof(char)*4));
    printf("%s\n\n", erol);

}

