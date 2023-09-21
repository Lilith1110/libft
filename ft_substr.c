/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:58:21 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/21 14:00:20 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*aux;
	size_t			i;
	unsigned int	j;

	aux = (char *)malloc(len * sizeof(char));
	i = 0;
	j = 0;
	while (i < len && s[start] != '\0')
	{
		aux[j] = s[start];
		j++;
		start++;
		i++;
	}
	return (aux);
}
