/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:34:53 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/20 08:33:37 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strs(char const *s, char c)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			total++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (total);
}

static int	get_str_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static void	free_array(int i, char **array)
{
	while (i > 0)
	{
		i--;
		free(array[i]);
	}
	free(array);
}

static char	**aux_split(char const *s, char c, char **array, int strs)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < strs)
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		array[i] = ft_substr(s, j, get_str_len(&s[j], c));
		if (!array[i])
		{
			free_array(i, array);
			return (0);
		}
		while (s[j] != '\0' && s[j] != c)
			j++;
		i++;
	}
	array[i] = 0;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		strs;

	strs = count_strs(s, c);
	array = (char **)malloc((strs + 1) * sizeof(char *));
	if (!array)
		return (0);
	array = aux_split(s, c, array, strs);
	return (array);
}
