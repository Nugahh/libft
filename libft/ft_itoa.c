/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 15:29:20 by fwong             #+#    #+#             */
/*   Updated: 2022/05/22 17:38:55 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(int c)
{
	int			i;
	long long	nb;

	nb = c;
	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			i;
	long long	a;
	char		*str;

	a = n;
	str = malloc(sizeof(char) * (ft_strlen(a) + 1));
	if (!str)
		return (NULL);
	i = ft_strlen(a);
	str[i] = '\0';
	i--;
	if (a == 0)
		str[0] = '0';
	if (a < 0)
	{
		a *= -1;
		str[0] = '-';
	}
	while (a > 0)
	{
			str[i] = '0' + (a % 10);
			a /= 10;
			i--;
	}
	return (str);
}
/* 
int main ()
{
	printf("%s", ft_itoa(-2147483648));
} */