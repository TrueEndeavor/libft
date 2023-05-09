/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:21:57 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/09 16:11:12 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* strncmp example */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	while (num-- && *str1++ && *str2++)
	{
		if (*str1 > *str2)
			return (1);
		else if (*str1 < *str2)
			return (-1);
	}
	return (0);
}
