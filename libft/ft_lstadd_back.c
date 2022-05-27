/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 04:35:29 by fwong             #+#    #+#             */
/*   Updated: 2022/05/27 04:46:17 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*save_lst;

	if (new && lst)
	{
		if (!*lst)
		{
			*lst = new;
			return ;
		}
		save_lst = ft_lstlast(*lst);
		save_lst->next = new;
	}
}