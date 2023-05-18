/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:03:45 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/18 11:52:42 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	substr_count(char const *s, char c)
{
	int	count;

	count = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (strchr(&c,*s) == NULL)
		{
			count++;
			while (*s && strchr(&c, *s) == NULL)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static int	substr_len(char const *s, char c)
{
	const char	*end;
	int			len;

	end = strchr(s, c);
	len = 0;
	if (end)
		len = end - s;
	else
		len = strlen(s);
	return (len);
}	

static void	*free_mem(char **new, int i)
{
	while (i--)
	{
		if (new[i])
			free(new[i]);
	}
	free(new);
	return (NULL);
}

static int	split(char **new, char const *s, char c)
{
	int	i;
	int	subs_len;

	i = 0;
	subs_len = 0;
	while (*s)
	{
		while (*s == c)
			++s;
		if (*s)
		{
			subs_len = substr_len(s, c);
			new[i] = malloc(subs_len + 1 * sizeof(char));
			if (!new[i])
			{
				free_mem(new, i);
				return (0);
			}
			ft_strlcpy(new[i], s, subs_len + 1);
			s += subs_len;
			i++;
		}
	}
	new[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**new;

	if (!s)
		return (NULL);
	new = ft_calloc(substr_count(s, c) + 1, sizeof(char *));
	if (!new)
		return (NULL);
	if (!split(new, s, c))
		return (NULL);
	return (new);
}
