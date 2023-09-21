/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:37:57 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/21 18:17:25 by lilith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*auxdst;
	unsigned char	*auxsrc;
	
	if (!dst && !src)
		return (NULL);
	auxdst = (unsigned char *)dst;
	auxsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		*(auxdst + i) = *(auxsrc + i);
		i++;
	}
	return (dst);
}
