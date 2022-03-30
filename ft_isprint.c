/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:29:59 by fwong             #+#    #+#             */
/*   Updated: 2022/03/30 14:29:59 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c > 31 || c == 127)
		return (1);
	else
		return (0);
}
/* 
int main()
{
    printf("%d\n", isprint(31));
    printf("%d\n", ft_isprint(31));
} */