/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:59:45 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/21 22:12:55 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
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
