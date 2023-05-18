/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:06:46 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/18 17:17:44 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_mem(t_list *t, void(*del)(void *))
{
	if (!t)
	{
		ft_lstclear(&t, del);
	}
}

static t_list	*new_list(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	new = NULL;
	tmp = NULL;
	if (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
			return (NULL);
		new = tmp;
		lst = lst->next;
		while (lst)
		{
			tmp->next = ft_lstnew(f(lst->content));
			free_mem(tmp->next, del);
			tmp = tmp->next;
			lst = lst->next;
		}
	}
	tmp->next = NULL;
	return (new);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	if (!lst)
		return (NULL);
	return (new_list(lst, f, del));
}
