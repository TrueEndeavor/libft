/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:23:01 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/10 10:16:51 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char	*little, size_t len)
{
	size_t		little_len;

	if (!*little)
		return ((char *)big);
	little_len = strlen(little);
	while (*big && len >= little_len)
	{
		if (strncmp(big, little, little_len) == 0)
			return ((char *)big);
		++big;
		--len;
	}
	return (0);
}
