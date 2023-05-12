/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:12:13 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/10 10:38:51 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned char		*tmp;

	d = (unsigned char *) dest;
	if (dest < src)
	{
		memcpy(dest, src, n);
	}
	else
	{
		tmp = (unsigned char *)malloc(n * sizeof(char));
		if (tmp == NULL)
			return (tmp);
		memcpy(tmp, src, n);
		while (n--)
		{
			d[n] = tmp[n];
		}
		free (tmp);
	}
	return (dest);
}
