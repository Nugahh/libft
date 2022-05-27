/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 04:47:06 by fwong             #+#    #+#             */
/*   Updated: 2022/05/27 04:59:54 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*save_lst;

	if (*lst)
	{
		while (*lst)
		{
			save_lst = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = save_lst;
		}
		*lst = 0;
	}
}
