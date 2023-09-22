/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:33:05 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/22 09:41:35 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*auxs;
	unsigned char	auxc;

	auxc = (unsigned char)c;
	auxs = (unsigned char *)s;
	while (n > 0)
	{
		if (*auxs == auxc)
			return (auxs);
		n--;
		auxs++;
	}
	return (0);
}
