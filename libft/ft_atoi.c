#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	size_t	i;
	int	s;
	long rest;

	i = 0;
	s = 1;
	rest = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) 
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -s;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (s == 1 && (rest > 214748364 || (rest == 214748364 && (str[i] - '0') > 7)))
            return (2147483647);
		if (s == -1 && (rest > 214748364 || (rest == 214748364 && (str[i] - '0') > 8)))
            return (-2147483648);
		rest = (str[i] - '0') + (rest * 10);
        i++;
	}
	return ((int)(rest * s));
}
int main()
{
    char *gizem = "                  -5645646545487879878465131556456488876135456466889784612313213216546864513784657318465134865134657483648abc";
    printf("%d\n%d", ft_atoi(gizem),atoi(gizem));
}