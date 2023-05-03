/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:04:30 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/03 10:45:27 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}


#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;

	c = 'S';
	printf("%d\n", isalpha(c));
	printf("%d", ft_isalpha(c));
	return (0);
}
