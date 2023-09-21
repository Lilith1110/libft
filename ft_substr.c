/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:58:21 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/21 18:41:15 by lilith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*aux;
	size_t			i;
	unsigned int	j;

	aux = (char *)malloc((len + 1) * sizeof(char));
	if (!aux)
		return (NULL);
	i = 0;
	j = 0;
	while (i < len && s[start] != '\0' && start <= ft_strlen(s))
	{
		aux[j] = s[start];
		j++;
		start++;
		i++;
	}
	aux[j] = '\0';
	return (aux);
}
