/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:12:07 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/16 13:08:48 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*xd;
	const unsigned char	*xs;	

	xd = dest;
	xs = src;
	while (n--)
	{
		if (!(xs == dest || xd == src))
			*(unsigned char *)xd++ = *(unsigned char *)xs++;
		else
			return (dest);
	}
	return (dest);
}
