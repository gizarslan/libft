/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garslan <garslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:30:48 by garslan           #+#    #+#             */
/*   Updated: 2025/06/10 23:23:49 by garslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*del(void *content)
{
	free(content);
}

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
/* int main()
{
	char *x1 = "gizem";
	char *x2 = "arslan";
	char *x3 = "mükemmeldir";
	t_list *dest3, *dest1, *dest2;
	int a;
	dest3 = ft_lstnew(x1);
	dest1 = ft_lstnew(x2);
	dest2 = ft_lstnew(x3);
	ft_lstadd_front(&dest2, dest1);
	ft_lstadd_front(&dest1, dest3);
	dest1->content =malloc(20);
	ft_lstdelone(dest1, free);
	dest3->next = dest2; 
	printf("%s", ((dest3->next) ? (dest3->next) : NULL));
} */