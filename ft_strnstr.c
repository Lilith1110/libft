/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:53:52 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/13 16:36:37 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = 0;
	str = (char *)haystack;
	if (*needle == '\0')
		return (str);
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && j < len)
		{
			if (needle[j + 1] == '\0' && j + 1 == len - 1)
			{
				str = (char *)(haystack + i);
				return (str);
			}
			j++;
		}
		i++;
	}
	return (0);
}
