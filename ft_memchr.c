/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garslan <garslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:59:57 by garslan           #+#    #+#             */
/*   Updated: 2025/05/28 17:59:57 by garslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	const unsigned char	*ptr1;
	size_t				i;

	i = 0;
	ptr1 = (const unsigned char *)ptr;
	while (i < n)
	{
		if (ptr1[i] == (unsigned char)c)
			return ((void *)(ptr1 + i));
		i++;
	}
	return (NULL);
}
