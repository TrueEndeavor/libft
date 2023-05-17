/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 18:06:54 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/17 11:42:43 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*begin;

	count = 0;
	begin = lst;
	if (lst)
	{
		count++;
		while (lst->next)
		{
			count++;
			lst = lst->next;
		}
	}
	return (count);
}