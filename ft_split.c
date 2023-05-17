/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 17:56:21 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/17 15:24:47 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	word;

	word = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			word++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (word);
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

static int	word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		i;
	int		w_len;

	if (!s)
		return (NULL);
	new = malloc(word_count(s, c) + 1 * sizeof(char *));
	if (!new)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			++s;
		if (*s)
		{
			w_len = word_len(s, c);
			new[i] = malloc(w_len + 1 * sizeof(char));
			if (!new[i])
				return (free_mem(new, i));
			ft_strlcpy(new[i], s, w_len + 1);
			s += w_len;
			i++;
		}
	}
	new[i] = 0;
	return (new);
}
