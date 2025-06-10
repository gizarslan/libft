/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garslan <garslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 21:28:36 by garslan           #+#    #+#             */
/*   Updated: 2025/06/10 23:24:46 by garslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst -> next;
	}
	return (count);
}
/* int main()
{
	char *x1 = "gizem";
	char *x2 = "arslan";
	char *x3 = "mükemmeldir";
	t_list *dest, *dest1, *dest2;
	int a;
	dest = ft_lstnew(x1);
	dest1 = ft_lstnew(x2);
	dest2 = ft_lstnew(x3);
	ft_lstadd_front(&dest,dest1);
	ft_lstadd_front(&dest,dest2);
	a = ft_lstsize(dest);
 	-printf("%d\n", a);
	printf("%s\n", dest -> content);
	printf("%s\n", dest -> next -> content);
	printf("%s\n", dest -> next -> next -> content);-
	while (dest != NULL)
	{
		printf("%s\n", (char *)(dest -> content));
		dest = dest -> next;
	}
} */
