/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garslan <garslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 21:44:25 by garslan           #+#    #+#             */
/*   Updated: 2025/06/12 18:31:42 by garslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countstep(int c)
{
	unsigned int	counter;

	counter = 0;
	if (c < 0)
	{
		counter++;
		c = -c;
	}
	while (c)
	{
		c = c / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_countstep(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = '\0';
	while (n)
	{
		if (n < 0)
			str[len] = ((n % 10) * -1) + '0';
		else if (n > 0)
			str[len] = ((n % 10)) + '0';
		len--;
		n /= 10;
	}
	return (str);
}
