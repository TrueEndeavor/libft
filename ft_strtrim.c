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
#include <stdlib.h>
#include <string.h>

char	*ft_s(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1)
		return (NULL);
	start = 0;
	end = strlen(s1) - 1;
	while (s1[start] && strchr(set, s1[start]))
		start++;
	while (end > start && strrchr(set, s1[end]))
		end--;
	len = end - start;
	return (ft_substr(s1, start, len + 1));
}