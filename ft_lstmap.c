/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:06:46 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/17 18:13:28 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*begin;
	t_list	*new;
	t_list	*tmp;

	if (lst)
	{
		while (lst->next)
		{
			begin = lst;
			tmp = f(lst);
			
			del(tmp->content);
			lst = lst->next;
		}
	}
}