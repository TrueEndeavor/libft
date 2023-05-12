/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:54:17 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/12 17:46:17 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dst;
	size_t	total;

	total = nmemb * size;
	if (size != 0 && total / size != nmemb)
		return (NULL);
	dst = (void *)malloc(total);
	if (dst == NULL)
		return (NULL);
	ft_bzero(dst, total);
	return (dst);
}
