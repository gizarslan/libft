#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *src)
{
	size_t		len;
	char	*copy;

	len = 0;
	while (src[len])
		len++;
	copy = (char *)malloc((len + 1) * sizeof(char));
    if(!copy)
        return(NULL);
	len = 0;
	while (src[len])
	{
		copy[len] = src[len];
		len++;
	}
	copy[len] = '\0';
	return (copy);
}

int main()
{
    char *gizem = "gizem arslan müğüğğüğüğüğüğüğüğüğüğüğüğüğüğüldir";
    printf("%s\n%s", ft_strdup(gizem), strdup(gizem));
}