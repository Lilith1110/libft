/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 08:37:36 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/16 12:26:34 by lilith           ###   ########.fr       */
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

static char	*new_str(size_t n)
{
	char	*str;

	str = (char *)malloc((n + 1) * sizeof(char));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	while (s1[start] && char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && char_in_set(s1[end - 1], set))
		end--;
	newstr = new_str(end - start);
	if (!newstr)
		return (NULL);
	i = 0;
	while ((start + i) < end)
	{
		newstr[i] = s1[start + i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
