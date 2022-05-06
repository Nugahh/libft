/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 00:42:27 by fwong             #+#    #+#             */
/*   Updated: 2022/03/31 00:42:27 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/* 
int main()
{
    printf("%c\n", toupper('A'));
    printf("%c\n", ft_toupper('A'));
	return (0);
} */