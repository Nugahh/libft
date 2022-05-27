/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 04:49:48 by fwong             #+#    #+#             */
/*   Updated: 2022/05/27 04:51:33 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void))
{
	t_list	*new;
	t_list	*save;
	t_list	*tmp;

	if (!f || !lst)
		return (0);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (0);
	save = new;
	lst = lst->next;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		save->next = tmp;
		save = tmp;
		lst = lst->next;
	}
	return (new);
}