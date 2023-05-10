/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:06:33 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/10 10:06:05 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	size_t		len;
	const char	*str_end;
	const char	*p;

	p = NULL;
	if (!str)
		return (0);
	len = strlen(str);
	str_end = str + len - 1;
	if ((unsigned char)c == '\0')
	{
		return((char *)str_end)+ 1;
	}	
	while (str_end >= str)
	{
		if (*str_end == (unsigned char)c)
			return ((char *)str_end);
		str_end--;
	}
	return ((char *)p);
}
