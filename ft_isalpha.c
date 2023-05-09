/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lannur-s <lannur-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:04:30 by lannur-s          #+#    #+#             */
/*   Updated: 2023/05/09 16:08:33 by lannur-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') || 0);
}

static int	ft_islower(int c)
{
	return ((c >= 'a' && c <= 'z') || 0);
}

int	ft_isalpha(int c)
{
	return ((ft_isupper(c) || ft_islower(c)) || 0);
}
