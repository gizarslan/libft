/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garslan <garslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 16:51:17 by garslan           #+#    #+#             */
/*   Updated: 2025/06/10 23:23:10 by garslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*int main()
{
	char *content = "gizem";
	char *content2 = "arslan";
	t_list *x = ft_lstnew(content);
	t_list *x2 = ft_lstnew(content2);
	ft_lstadd_front(&x,x2);
	printf("%s \n", x2 -> content);
	printf("%s", x2 -> next -> content);
	
}*/