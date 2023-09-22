/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:30:19 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/22 09:01:32 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*auxdst;
	char	*auxsrc;
	size_t	i;

	auxdst = (char *)dst;
	auxsrc = (char *)src;
	if (!dst && !src)
		return (dst);
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (len-- > 0)
			auxdst[len] = auxsrc[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			auxdst[i] = auxsrc[i];
			i++;
		}
	}
	return (auxdst);
}
