/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:56:07 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/02 13:48:35 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
		|| (c >= 48 && c <= 57))
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

	c = '0';
	printf("%d\n", isalnum(c));
	printf("%d", ft_isalnum(c));
	return (0);
}
