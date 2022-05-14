/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:04:01 by fwong             #+#    #+#             */
/*   Updated: 2022/05/13 19:42:00 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dlen;

	dlen = malloc(sizeof(len + 1));
	if (!dlen)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dlen[i] = s[i + start];
		i++;
	}
	dlen[i] = '\0';
	return (dlen);
}
/* 
int main()
{
	char a[50] = "bonjour";

	printf("%s", ft_substr(a, 3, 3));
} */