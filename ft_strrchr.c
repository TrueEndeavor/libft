/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:06:33 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/09 15:45:12 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	size_t		len;
	const char	*str_end;
	
	if (!str)
		return (0);
	len = strlen(str);
	str_end = str + len - 1;
	while (*str_end != '\0')
	{
		if (*str_end == c)
		{
			return ((char*)str_end);
		}
		str_end--;
	}
	return (0);
}