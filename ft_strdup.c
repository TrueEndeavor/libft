/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:22:17 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/09 17:02:37 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*dst;
	char	*dst_move;

	dst = (char *)malloc(ft_strlen(string) + 1 * sizeof(char));
	if (!dst)
		return (0);
	dst_move = dst;
	while (*string != '\0')
	{
		*dst_move++ = *string++;
	}
	*dst_move = '\0';
	return (dst);
}
