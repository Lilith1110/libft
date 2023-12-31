/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:53:52 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/22 08:46:04 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	if (!haystack && len == 0)
		return (0);
	i = 0;
	while (*haystack != '\0' && i < len)
	{
		j = 0;
		while (*(haystack + j) == needle[j] && j + i < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack);
			j++;
		}
		i++;
		haystack++;
	}
	return (0);
}
