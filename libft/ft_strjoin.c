#include "libft.h"
#include <stdio.h>
char *ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	size_t j;
    char *dest;

	i = 0;
	j = 0;
	if(!s1 || !s2)
		return (NULL);
	dest = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if(!dest)
		return(NULL);
	while(s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while(s2[j])
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
int main()
{
	char *s1 = "gizem ";
	char s2[2];
	printf("%s", ft_strjoin(s1,s2));
}

//   gizem arslan    an