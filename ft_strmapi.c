/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garslan <garslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 20:33:37 by garslan           #+#    #+#             */
/*   Updated: 2025/06/10 23:57:46 by garslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*temp;

	len = ft_strlen(s);
	i = 0;
	temp = (char *)malloc(sizeof(char) * len);
	if (!temp)
		return (NULL);
	temp = (char *)s;
	while (i < len)
	{
		temp[i] = f(i, temp[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
/* char my_func(unsigned int i, char c)
{
    if (i % 2 == 0)
        c = c - 32; 
    return c;
}
#include <stdio.h>
int main()
{	
	char gizem[] = "gizem arslan";
	ft_strmapi(gizem, my_func);
	printf("%s", gizem);
} */

/* 
HATA ALAN KOD

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	size_t len;
	char	*temp;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		f(i,s[i]);
		i++;
	}
	temp = (char	*)malloc(sizeof(char) * len);
	if(!temp)
		return (NULL);
	temp = (char *)s;
	return (temp);
}
*/