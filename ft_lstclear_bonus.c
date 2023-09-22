/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalah-d <lsalah-d@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:53:28 by lsalah-d          #+#    #+#             */
/*   Updated: 2023/09/22 09:06:19 by lsalah-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (!lst || !(*lst) || !del)
		return ;
	aux = *lst;
	while (aux != NULL)
	{
		del((*lst)->content);
		*lst = (*lst)->next;
		free(aux);
		aux = *lst;
	}
	*lst = NULL;
}
