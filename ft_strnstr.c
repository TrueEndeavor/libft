/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:23:01 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/09 13:29:14 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char	*little, size_t len)
{
	size_t		little_len;

	if (!little)
		return ((char *)big);
	little_len = strlen(little);
	while (*big && len >= little_len)
	{
		if (strncmp(big, little, little_len) == 0)
			return ((char *)big);
		++big;
		--len;
	}
	return (0);
}

int main()
{
    // Take any two strings
    char s1[] = "GeeksforGeeks";
    char s2[] = "for";
    char* p;
 
    // Find first occurrence of s2 in s1
    p = ft_strnstr(s1, s2, 9);
 
    // Prints the result
    if (p) {
        printf("String found\n");
        printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p);
    } else
        printf("String not found\n");
 
    return 0;
}