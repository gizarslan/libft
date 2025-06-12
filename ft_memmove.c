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

	if (!dst && !src)
		return (NULL);
	tempdst = (unsigned char *)dst;
	tempsrc = (const unsigned char *)src;
	i = 0;
	if (tempdst > tempsrc)
	{
		while (len-- > 0)
			tempdst[i] = tempsrc[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			tempdst[i] = tempsrc[i];
			i++;
		}
	}
	return (dst);
}
