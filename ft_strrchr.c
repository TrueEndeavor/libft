/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:06:33 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/16 15:31:42 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t		len;
	const char	*str_end;

	len = ft_strlen(str);
	if ((unsigned char)c == '\0')
	{
		return ((char *)str + len);
	}	
	str_end = str + len - 1;
	while (str_end >= str)
	{
		if (*str_end == (unsigned char)c)
			return ((char *)str_end);
		str_end--;
	}
	if (str_end < str)
	{
		return (NULL);
	}	
	return ((char *)str_end);
}
