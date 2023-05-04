/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:46:47 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/04 17:18:07 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_isalnum(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);

size_t		ft_strlen(const char *s);

void		ft_bzero(void *s, size_t n);

void		*ft_memset(void *s, int c, size_t n);

void		*ft_memmove(void *dest, const void *src, size_t n);

void		*ft_memcpy(void *dest, const void *src, size_t n);

size_t		ft_strlcpy(char *dst, const char *src, size_t size);

void		*ft_memchr(const void *s, int c, size_t n);

int			ft_memcmp(const void *s1, const void *s2, size_t n);

#endif
