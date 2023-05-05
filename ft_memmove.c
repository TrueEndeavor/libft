/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:12:13 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/05 17:21:53 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	/* Memmove behaves like memcpy in case of non-overlapping memory
	But, when there is overlapping memory memmove is the best.
	*/

	/* Since it is memory copy of generic pointers (no specific datatypes),
	 byte by byte copy is needed. So, I type cast both dest and src to unsigned 
	 char
	*/
 	unsigned char		*d;
	const unsigned char	*s;
 	/* I create a tmp pointer to make a full copy of the src. It is because 
	unlike in memcpy (where it reads and writes each byte one by one), memmove
	is supposed to read fully and have a copy before it starts writing
	*/
	unsigned char		*tmp;

	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	/* I want to check if the dest address is occuring before the source address,
	then there shouldn't be any problem with copying. So I use memcpy simple.
	NOTSURE: if this check (dest < src) is the correct way to check the overlapping memory
	*/
	if (dest < src)
	{
		memcpy(dest, src, n);
	}
	/* 
	I am assuming that there is an overlapping memory situation.
	so, I am starting to copy src into tmp, and because dest address is occuring after 
	source, I am starting to fill up values from end 
	NOTSURE: if this works for dest and src inputs from different memory locations 
	*/
	else
	{
		tmp = (unsigned char *)malloc(n * sizeof(char));
		if (tmp == NULL)
			return tmp;
		memcpy(tmp, src, n);
		while (n--)
		{
			d[n] = tmp[n];
		}
	}
	/* Here I have a weird problem of consecutive memory. The dest string doesn't seem
	to have ended properly*/

	return (dest);
}
/*
int main() 
{
char s[] = {65, 66, 67, 68, 69, 70, 71};
	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
	char sCpy[] = {97, 0, 99, 100, 101, 102, 103};
	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

	ft_memmove(s0, s, 7);
printf("\n\n%s\n", s0);	
printf("\n\n%ld\n", strlen(s0));	

   return 0;
}
*/