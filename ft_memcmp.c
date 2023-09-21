/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:46:01 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/21 18:19:55 by lilith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*auxs1;
	unsigned char	*auxs2;

	if (n == 0)
		return (0);
	i = 0;
	auxs1 = (unsigned char *)s1;
	auxs2 = (unsigned char *)s2;
	while (i < (n - 1) && *auxs1 == *auxs2)
	{
		auxs1++;
		auxs2++;
		i++;
	}
	return (*auxs1 - *auxs2);
}
