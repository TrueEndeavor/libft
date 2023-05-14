/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 11:01:49 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/14 15:47:57 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*dst;
	char const	*src;
	size_t		slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		start = slen;
	if (len > slen - start)
		len = slen - start;
	src = s + start;
	dst = (char *)malloc(len + 1 * sizeof(char));
	if (dst == NULL)
		return (NULL);
	ft_memcpy(dst, src, len);
	dst[len] = 0;
	return (dst);
}


