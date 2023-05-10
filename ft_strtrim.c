/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:18:11 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/10 18:20:41 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	trimmed_str = ft_strmapi(s1 + start, ft_trimchr);
	if (!trimmed_str)
		return (NULL);
	ft_striteri(trimmed_str, ft_trimpad(len));
	return (trimmed_str);
}

int	main(void)
{
	char *s1 = "hehe!!+ll++!e!h";
	char *set = "he!+";
	size_t	len;
	size_t	start;

	printf("\n\n string is :%s\n%ld",ft_find_left(s,se),len - start);
	return (0);
}

