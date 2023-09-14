/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 08:37:36 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/14 11:45:22 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_in_set(char c, char const *set)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_str;
	char	*newstr;

	len_str = ft_strlen(s1);
	newstr = (char *)mallloc(len_str * sizeof(char));
	if (!newstr)
		return (0);
	while (*s1 != '\0')
	{
		if (char_in_set(*s1, set) != 1)
			ft_strlcat(newstr, s1, 1);
		s1++;
	}
	return (newstr);
}
