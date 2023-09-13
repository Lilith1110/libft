/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:56:32 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/12 10:42:58 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strchr(const char *s, int c)
{
	char	*aux;

	aux = (char *)s;
	while (*aux != '\0' && *aux != c)
		aux++;
	if (*aux == c)
		return (aux);
	return (0);
}
