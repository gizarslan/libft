/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garslan <garslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 18:00:11 by garslan           #+#    #+#             */
/*   Updated: 2025/05/28 18:00:11 by garslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*tempdst;
	const unsigned char	*tempsrc;

	tempdst = (unsigned char *)dst;
	tempsrc = (const unsigned char *)src;
	i = 0;
	if (tempdst[i] > tempsrc[i])
	{
		i = len;
		while (i > 0)
		{
			tempdst[i] = tempsrc[i];
			i--;
		}
		return (dst);
	}
	while (i < len)
	{
		tempdst[i] = tempsrc[i];
		i++;
	}
	return (dst);
}

/* int main(void)
{
    void *t_src;
    void *t_dest;
    unsigned char src[22] = "12345";
    unsigned char dest[22] = "12345";
    t_src = (unsigned char *)src;
    t_dest = (unsigned char *)dest;
    ft_memmove(t_src, t_src + 2, 20);
    printf("%s\n",src);
    memmove(t_dest, t_dest + 2, 20);
    printf("%s\n",dest);
} */
