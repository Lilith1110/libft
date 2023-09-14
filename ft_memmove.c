/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:30:19 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/14 10:58:49 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*auxdst;
	char	*auxsrc;

	auxdst = (char *)dst;
	auxsrc = (char *)src;
	if (*auxdst != '\0' && *auxsrc != '\0' && len > 0)
	{
		len++;
	}
	return (dst);
}

/*int	main (void)
{
	char	str[50] = "hola que tal";
	printf("FUNCION LIBRERIA\n");
	printf("dst: %s\n", str + 5);
	printf("src: %s\n", str);
	printf("%s\n", memmove(str + 5, str, 8));
	char	str2[50] = "hola que tal";
	printf("MI FUNCION\n");
	printf("dst: %s\n", str2 + 5);
	printf("src: %s\n", str2);
	printf("%s\n", ft_memmove(str2 + 5, str2, 8));
}*/
