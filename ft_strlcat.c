/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:29:24 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/08 15:08:36 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	char	*dst_end;	
	char	*dst_move;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	dst_end = dst + len_d;
	dst_move = dst_end;
	if (!src)
		return (0);	
	if (size == 0 || size <= len_d)
		return (size + len_s);
	while ((dst_move - dst_end) < size - 1 && *src)
		*dst_move++ = *src;
	*dst_move = 0;
	return (len_d + len_s);
}