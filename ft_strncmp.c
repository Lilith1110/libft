/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:43:12 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/20 10:34:09 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (*s1 != '\0' && *s2 != '\0' && i < (n - 1) && *s1 == *s2)
	{
		s1++;
		s2++;
		i++;
	}
	if (((unsigned char)*s1 - (unsigned char)*s2) > 0)
		return (1);
	else if (((unsigned char)*s1 - (unsigned char)*s2) < 0)
		return (-1);
	else
		return (0);
}
