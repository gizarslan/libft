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

/* int main() {
   
    int c[32] = {72, 27,3};
    ft_memset(c , 300, 8);
    ft_memset(c , 300, 5);
    printf("%d\n", c[1]);

    char* a = "ö";
    unsigned char *b = "ö";
    printf("%d\n%d",b[0] ,b[1]);

} */
