/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:12:13 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/16 15:37:04 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*xd;
	const char	*xs;

	xd = dest;
	xs = src;
	if (xd == xs)
		return (dest);
	if (xd < xs)
		memcpy(xd, xs, n);
	else
		while (n--)
			xd[n] = xs[n];
	return (dest);
}
