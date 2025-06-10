/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garslan <garslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 10:55:39 by garslan           #+#    #+#             */
/*   Updated: 2025/06/10 23:38:01 by garslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
}

/* int main()
{
	#include <fcntl.h>
	//char buff[10];
	
	//int fd = open("text.txt", O_CREAT | O_TRUNC | O_APPEND, 0644);
	//buff[7] = '\0';
	//read(fd,buff, 5);
	//printf(buff)

	int a = 15;
	
	char str[5];
 	str[4] = '\0';
	for (size_t i = 0; i < 4; i++)
	{
		str[i] = 'B';
	}
	printf("%s\n",str);
	ft_putstr_fd(str,0);
	printf("%s\n",str);
} */
