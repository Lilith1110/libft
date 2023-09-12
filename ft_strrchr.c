/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:53:00 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/12 11:47:31 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrchr(const char *s, int c)
{
    char    *aux;

    aux = (char *)s;
    while (*aux != '\0')
        aux++;
    while (aux != s && *aux != c)
        aux--;
    if (*aux == c)
      return (aux);
    return (0);
}