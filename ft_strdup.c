/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:43:34 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/13 10:44:01 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*dup;

	size = ft_strlen(s1);
	dup = (char *)malloc(size * sizeof(char));
	if (!dup)
		return (NULL);
	return (ft_strlcpy(dup, s1, size));
}
