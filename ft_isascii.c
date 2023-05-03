/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:46:55 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/03 10:59:32 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}


#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int ch;
 
    ch = 0x80;
	printf("%d\n", isascii(ch));
	printf("%d", ft_isascii(ch));
	return (0);
}
