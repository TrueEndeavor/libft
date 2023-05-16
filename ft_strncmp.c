/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:21:57 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/16 16:31:21 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	const unsigned char	*xs1;
	const unsigned char	*xs2; 

	xs1 = (const unsigned char	*)str1;
	xs2 = (const unsigned char	*)str2;
	while (--num && *xs1 && *xs2)
	{
		if (*xs1 == *xs2)
		{
			xs1++;
			xs2++;
		}
	}
	return ((*xs1 - *xs2));
}

