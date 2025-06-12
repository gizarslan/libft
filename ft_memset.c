/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garslan <garslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 18:00:16 by garslan           #+#    #+#             */
/*   Updated: 2025/05/28 18:00:16 by garslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	x;
	size_t			i;

	ptr = dest;
	x = c;
	i = 0;
	while (i < n)
	{
		ptr[i] = x;
		i++;
	}
	return (dest);
}
