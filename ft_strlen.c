/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:12:22 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/03 18:25:34 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	unsigned int		i = 0;
	
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include <stdio.h>

int	main(void)
{
	char arr[10] = "helloworld";
	printf("%ld", ft_strlen(arr));

	return (0);
}