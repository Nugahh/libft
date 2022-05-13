/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:10:30 by fwong             #+#    #+#             */
/*   Updated: 2022/05/12 18:15:53 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

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

int	ft_index(char s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*len;

	i = 0;
	if (!s1 || !set)
		return (0);
	while (s1[i] && ft_index(s1[i], set))
		i++;
	j = ft_strlen(s1);
	while (ft_index(s1[j - 1], set))
		j--;
	len = malloc(sizeof(char) * (j - i + 1));
	if (!len)
		return (NULL);
	k = 0;
	while (i < j)
	{
		len[k++] = s1[i++];
	}
	len[k] = '\0';
	return (len);
}
/* 
int main()
{
	char *a = "ici la merde Bonjouri c'est moi ici la merde";
	char *b = "ici la merde";

	printf("%s", ft_strtrim(a, b));
} */
