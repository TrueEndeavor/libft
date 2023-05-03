/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 12:46:47 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/03 16:55:14 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <ctype.h>

int			ft_isalpha(int c);

int			ft_isdigit(int c);

int			ft_isascii(int c);

int			ft_isprint(int c);

int			ft_isalnum(int c);

int			ft_tolower(int c);

int			ft_toupper(int c);

#endif
