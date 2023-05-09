/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:07:31 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/09 17:45:42 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (!str)
		return (0);
	while (*str != '\0')
	{
		if (*str == (unsigned char)c)
		{
			return ((char *) str);
		}
		str++;
	}
	if (c == '\0')
	{
		return ((char *)str);
	}	
	return (NULL);
}
