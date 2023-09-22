/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:58:21 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/22 15:30:11 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*aux;
	size_t	i;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start > size)
		aux = (char *)malloc(1 * sizeof(char));
	else if (size >= len + start)
		aux = (char *)malloc((len + 1) * sizeof(char));
	else
		aux = (char *)malloc((size + 1) * sizeof(char));
	if (!aux)
		return (NULL);
	i = 0;
	while (i < len && s[start] != '\0' && start <= size)
	{
		aux[i] = s[start];
		start++;
		i++;
	}
	aux[i] = '\0';
	return (aux);
}
