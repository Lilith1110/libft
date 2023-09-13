/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:08:22 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/13 12:08:47 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_size;
	int		s2_size;
	char	*newstr;

	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	newstr = (char *)malloc((s1_size + s2_size) * sizeof(char));
	newstr = ft_strlcpy(newstr, s1, s1_size);
	return (ft_strlcat(newstr, s2, s1_size + s2_size));
}
