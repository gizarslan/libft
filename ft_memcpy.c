/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garslan <garslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 18:00:07 by garslan           #+#    #+#             */
/*   Updated: 2025/05/28 18:00:07 by garslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*tempdest;
	unsigned const char	*tempsrc;
	size_t				i;

	tempdest = (unsigned char *)dest;
	tempsrc = (unsigned const char *)src;
	i = 0;
	while (i < n)
	{
		tempdest[i] = tempsrc[i];
		i++;
	}
	return (dest);
}

/* int main()
{
    char dest[] = "gizem arslan";
    char src[] = "gi";
    memcpy(dest+3,dest,4);
    memmove(src+2, src,4);
    printf("%s\n%s", dest, src);
} */
