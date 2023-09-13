/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:33:05 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/13 09:33:34 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*auxs;
	unsigned char	auxc;

	auxc = (unsigned char)c;
	auxs = (char *)s;
	while (n > 0 && *auxs != '\0' && *auxs != auxc)
	{
		n--;
		auxs++;
	}
	if (*auxs == auxc)
		return (auxs);
	return (0);
}
