/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:55:59 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/12 12:27:59 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*aux;

	i = 0;
	aux = b;
	while (i < len)
	{
		*(aux + i) = (unsigned char) c;
		i++;
	}
	b = aux;
	return (b);
}
