/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:17:29 by fwong             #+#    #+#             */
/*   Updated: 2022/05/13 19:47:25 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const	*s1, char const *s2)
{
	int		i;
	int		j;
	size_t	dlen;
	size_t	slen;
	char	*ptr;

	dlen = ft_strlen(s1);
	slen = ft_strlen(s2);
	ptr = malloc(sizeof(dlen + slen + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ptr[i++] = s1[i++];
	}
	j = 0;
	while (s2[j])
	{
		ptr[i++] = s2[j++];
	}
	ptr[i] = '\0';
	return (ptr);
}
/* 
int main()
{
	char a[10] = "toto";
	char b[10] = "tata";

	printf("%s", ft_strjoin(a,b));
} */