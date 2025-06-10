/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garslan <garslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 23:02:13 by garslan           #+#    #+#             */
/*   Updated: 2025/06/10 23:23:58 by garslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst -> next != NULL)
	{
		lst = lst -> next;
	}
	return (lst);
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
	t_list *kocaeli = ft_lstlast(dest);
	char *selam =  ft_lstlast(dest)->content;
	printf("%s\n",(char *)dest->content);
} */