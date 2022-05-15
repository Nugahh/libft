/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:26:08 by fwong             #+#    #+#             */
/*   Updated: 2022/03/30 14:26:08 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 1 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int main()
{
    printf("%d\n", isascii(66));
    printf("%d\n", ft_isascii(66));
} */