/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:00:54 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/03 11:07:07 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 33 && c <= 126)
	{
		return (1);
	}
	return (0);
}


#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char ch;
 
    ch = 0;
	printf("%d\n", isprint(ch));
	printf("%d", ft_isprint(ch));
	
	return (0);
}
