/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:10:00 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/13 16:34:25 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len_dst;

	len_src = 0;
	len_dst = 0;
	while (src[len_src] != '\0')
		len_src++;
	while (dst[len_dst] != '\0')
		len_dst++;
	if (dstsize == 0 || dstsize <= len_dst)
		return (len_src + dstsize);
	while (len_dst < dstsize - 1 && *src != '\0')
	{
		dst[len_dst] = *src;
		len_dst++;
		src++;
	}
	dst[len_dst] = '\0';
	return (dstsize + len_src);
}