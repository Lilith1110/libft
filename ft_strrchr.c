/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:53:00 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/22 09:54:00 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*aux;
	char	caux;

	caux = (char)c;
	aux = (char *)s;
	while (*aux != '\0')
		aux++;
	while (aux != s && *aux != caux)
		aux--;
	if (*aux == caux)
		return (aux);
	return (0);
}
