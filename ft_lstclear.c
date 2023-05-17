/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:06:32 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/17 17:49:26 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	**begin;
	t_list	*xlst;

	if (lst && del)
	{
		begin = lst;
		while (*lst)
		{
			xlst = *lst;
			*lst = (*lst)->next;
			ft_lstdelone(xlst, del);
			xlst = NULL;
		}
		*begin = NULL;
	}
}
