/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:12:03 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/08 14:37:36 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	char	*dst_start;

	dst_start = dst;
	if (!src)
		return (0);
	len = ft_strlen(src);
	if (size > 0)
	{
		while ((dst - dst_start) < size - 1 && *src)
		{
			*dst++ = *src++;
		}
		*dst = '\0';
	}
	return (len);
}
