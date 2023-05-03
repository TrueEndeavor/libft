/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:13:54 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/03 11:15:29 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c-32);
	}
	return (c);
}


#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;

	c = 's';
	printf("%d\n", toupper(c));
	printf("%d", ft_toupper(c));
	return (0);
}
