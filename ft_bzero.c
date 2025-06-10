/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garslan <garslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:59:15 by garslan           #+#    #+#             */
/*   Updated: 2025/05/28 17:59:15 by garslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)dest;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

/* int main()
{
    -- int dizisi örneği -- 

    int dizi[] = {1,4,5,7,6,9};
    ft_bzero(dizi,sizeof(dizi));
    for(int i = 0; i<6 ; i++)
        printf("%d\n", dizi[i]);
    

    -- char örneği --
    char dizi[] = "gizem arslan";
    ft_bzero(dizi,sizeof(dizi));
    dizi[0] = 'f';
    dizi[1] = 'a';
    dizi[2] = 't';
    dizi[3] = 'm';
    dizi[4] = 'a';
    dizi[5] = '\0';

    printf("Yeni dizi: %s\n", dizi);

} */