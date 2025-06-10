/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garslan <garslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:09:54 by garslan           #+#    #+#             */
/*   Updated: 2025/06/10 23:22:55 by garslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return (NULL);
	if (*lst == NULL)
	{
		*lst = new;
		return (NULL);
	}
	temp = *lst;
	ft_lstlast(temp);
	temp->next = new;
}
/* int main()
{
	char *content = "gizem";
	char *content2 = "arslan";
	t_list *x = ft_lstnew(content);
	t_list *x2 = ft_lstnew(content2);
	ft_lstadd_back(&x,x2);
	printf("%s \n", (char *)(x -> content));
	printf("%s", (char *)(x -> next -> content));
} */