/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garslan <garslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 19:51:16 by garslan           #+#    #+#             */
/*   Updated: 2025/06/10 23:23:29 by garslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h"
#include <stdio.h>

void *del(void *content)
{
	free(content);
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	while (((*lst)->next) != NULL)
	{
		if (lst && del)
		{
			del((*lst)->content);
			lst = (*lst) -> next;
		}
	}
	free(lst);
} */
