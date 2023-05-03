/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:11:15 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/03 11:13:41 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ((c >= 'A' && c <= 'Z'))
	{
		return (c+32);
	}
	return (c);
}


#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;

	c = 'S';
	printf("%d\n", tolower(c));
	printf("%d", ft_tolower(c));
	return (0);
}
