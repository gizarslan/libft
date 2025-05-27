#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int ft_isalnum(int c)
{
    if (c >= 65 && c <= 90)
        return (1);
    else if (c >= 97 && c <= 122)
        return (1);
    else if (c >= 48 && c <= 57)
        return (1);
    else
        return (0);
}