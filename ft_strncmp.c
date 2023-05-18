/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:21:57 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/18 13:13:21 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	if (!num)
		return (0);
	while (--num && *str1 && *str2 && *str1 == *str2)
	{
			str1++;
			str2++;
	}
	return ((unsigned char)*str1 - (unsigned char)*str2);
}
