/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:59:45 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/14 17:12:28 by lilith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize != 0)
	{
		i = 0;
		while (*src != '\0' && i < dstsize - 1)
		{
			dst[i] = *src;
			src++;
			i++;
		}
		dst[i] = '\0';
	}
	while (*src != '\0')
	{
		src++;
		i++;
	}
	return (i);
}
