/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:47:16 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/20 08:38:45 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static unsigned int	ft_abs(int n)
{
	unsigned int	nbr;

	nbr = 1;
	if (n < 0)
		nbr *= -n;
	else
		nbr *= n;
	return (nbr);
}

char	*ft_itoa(int n)
{
	char			*nstr;
	unsigned int	nbr;
	int				len;

	len = n_len(n);
	nstr = (char *)malloc((len + 1) * sizeof(char));
	if (!nstr)
		return (0);
	nstr[len] = '\0';
	nbr = ft_abs(n);
	while (len-- > 0)
	{
		nstr[len] = '0' + nbr % 10;
		nbr = nbr / 10;
	}
	if (n < 0)
		nstr[0] = '-';
	return (nstr);
}
