/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garslan <garslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 20:33:37 by garslan           #+#    #+#             */
/*   Updated: 2025/06/12 19:36:37 by garslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*temp;

	if (!s || !f)
		return (NULL);
	i = 0;
	temp = (char *)malloc(sizeof(char) * len);
	if (!temp)
		return (NULL);
	temp = (char *)s;
	while (s[i])
	{
		temp[i] = f(i, temp[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
