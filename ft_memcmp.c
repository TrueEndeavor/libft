/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:12:03 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/09 11:00:08 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	const unsigned char	*ss2;
	
	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;
	while (n-- && *ss1++ && *ss2++)
	{
		if (*ss1 > *ss2)
			return (1);
		else if (*ss1 < *ss2)
			return (-1);
	}
	return (0);
}