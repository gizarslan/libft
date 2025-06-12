/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garslan <garslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:59:09 by garslan           #+#    #+#             */
/*   Updated: 2025/05/28 17:59:09 by garslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_controlif(long rest, int s, char c)
{
	if (s == 1 && (rest > 922337203685477580
			|| (rest == 922337203685477580 && (c) > '7')))
		return (-1);
	if (s == -1 && (rest > 922337203685477580
			|| (rest == 922337203685477580 && (c) > '7')))
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	long	rest;
	size_t	i;
	int		s;
	int		control;

	i = 0;
	s = 1;
	rest = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -s;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		control = ft_controlif(rest, s, str[i]);
		if (control == 0 || control == -1)
			return (control);
		rest = (str[i] - '0') + (rest * 10);
		i++;
	}
	return ((int)(rest * s));
}
