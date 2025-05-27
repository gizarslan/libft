#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdint.h>


int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
    int result;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (i < n)
	{
        return((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

int main()
{
    char gizem[] ="gira";
    char erol[] = "gira";
    printf("%d\n%d", strncmp(erol,gizem,5),ft_strncmp(erol,gizem,5));
}

/*
            result = (unsigned char)s1[i] - (unsigned char)s2[i];
            if(result < 0)
                return(-1);
            if(result > 0)
                return(1);


*/