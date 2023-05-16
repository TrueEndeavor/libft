/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 11:07:31 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/16 15:31:20 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str && *str != (char)c)
		str++;
	if (*str == (char)c)
	{
		return ((char *) str);
	}
	return (NULL);
}
