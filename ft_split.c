/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:34:53 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/14 10:55:43 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strs(char	const *s, char c)
{
	int	strs;

	strs = 0;
	while (*s != '\0')
	{
		if (*s == c)
			strs++;
		s++;
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	int		num_strs;
	char	**strs;
	int		len;
	int		i;

	num_strs = count_strs(s, c);
	strs = (char **)malloc(num_strs * sizeof(char *));
	if (!strs)
		return (0);
	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			strs[i] = (char *)malloc(len * sizeof(char));
			ft_strlcpy(strs[i], s, len);
			len = 0;
			i++;
		}
		else
			len++;
		s++;
	}
	return (strs);
}
