/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:35:40 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/03 11:15:56 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
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

	c = '$';
	printf("%d\n", isdigit(c));
	printf("%d", ft_isdigit(c));
	return (0);
}
