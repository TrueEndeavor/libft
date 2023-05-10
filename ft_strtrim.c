/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:18:11 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/10 16:33:36 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	
	dst = calloc(strlen(s1) + 1, sizeof(char));
	if (dst == NULL)
		return (NULL);
	if (!s1)
		return (NULL);	

	while (*set != '\0')
	{
		dst = ft_strchr(s1, *set)+1;
		//printf("...ft_strchr = %s\n", );
		set++;
	}
	return ((char	*)dst);
}

int	main(void)
{
	char *s1 = ".hello?.";
	char *set = ".?";
	size_t	len;
	size_t	start;

	start = 0;
	len = ft_strlen(s1);
	while (s1[start] && in_set(s1[start], set))
		start++;
	if (start == len)
		return (0);
	while (s1[len - 1] && in_set(s1[len - 1], set))
		len--;
	return ();	

	printf("\n\n string is :%s\n%ld",ft_strtrim(s,se),len - start);
	return (0);
}

