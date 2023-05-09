/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:29:24 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/09 10:43:54 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		len_d;
	size_t		len_s;
	char		*dst_end;
	size_t		diff;

	len_d = strlen(dst);
	len_s = strlen(src);
	dst_end = dst + len_d;
	if (!src)
		return (0);
	if (size == 0)
		return (size + len_s);
	diff = (size_t)(dst_end - dst);
	while (diff < size - 1 && *src)
	{
		*dst_end++ = *src++;
		diff++;
	}
	*dst_end = 0;
	return ((size_t)(len_d + len_s));
}
