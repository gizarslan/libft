/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garslan <garslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 11:08:53 by garslan           #+#    #+#             */
/*   Updated: 2025/06/10 23:53:50 by garslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	size_t			len;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		f(i, s);
		i++;
	}
}
/* 
void	ft_tolowerw(unsigned int c, char *g)
{
    if (g[c] >= 'a' && g[c] <= 'z')
    {
        g[c] = g[c] - 32;
    }
}
#include <stdio.h>
int main()
{
    char gizem[] = "GİZEM arsLAN \n";
    ft_striteri(gizem,ft_tolowerw);
    printf("%s", gizem);
} */