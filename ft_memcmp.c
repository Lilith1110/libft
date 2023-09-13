/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:46:01 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/13 09:46:29 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*auxs1;
	unsigned char	*auxs2;

	i = 0;
	auxs1 = (unsigned char *)s1;
	auxs2 = (unsigned char *)s2;
	while (*auxs1 != '\0' && *auxs2 != '\0' && i < n && *auxs1 == *auxs2)
	{
		auxs1++;
		auxs2++;
		i++;
	}
	return (*auxs1 - *auxs2);
}
