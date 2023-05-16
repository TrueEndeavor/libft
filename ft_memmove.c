/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:12:13 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/16 18:04:16 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*xd;
	const unsigned char	*xs;

	if (dest == src)
		return (dest);
	xd = dest;
	xs = src;
	if (src < dest && dest - src < (long) n)
		while (n--)
			*(xd + n) = *(xs + n);
	else
		memcpy(xd, src, n);
	return (dest);
}
