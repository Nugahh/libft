/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:57:45 by fwong             #+#    #+#             */
/*   Updated: 2022/05/22 17:57:54 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_count_char(char const*str, char c, int index)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != c)
			i++;
		else
			return (0);
	}
	return (i);
}

int	ft_count_words(char const*str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] == c)
		i++;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			j++;
		i++;
	}
	return (j);
}

char	*ft_malloc_and_fill(char const *s, char c, int word_count)
{
	int		index;
	int		j;
	int		k;
	char	*str;
	size_t	char_count;

	index = 0;
	j = 0;
	while (word_count--)
	{
		while (s[j] == c)
			index++;
		char_count = ft_count_char(s, c, index);
		str = malloc(sizeof(char) * char_count + 1);
		if (!str)
			return (NULL);
		printf("%ld\n", char_count);
		k = char_count + j;
		while (index < k)
		{
			str[index++] = s[j++];
		}
		index = 0;
		index++;
	}
}

char	**ft_split(char const *s, char c)
{
	int			i;
	int			j;
	size_t		word_count;
	char		**tab;

	word_count = ft_count_words(s, c);
	tab = malloc(sizeof(char *) * ft_count_words((char *)s, c));
	if (!tab)
		return (NULL);
	printf("caca\n");
	ft_malloc_and_fill(s, c, word_count);
	return (tab);
}
/* 
int main()
{
	char a[] = "Bonjour je nnn  ds  ds";

	ft_split(a, ' ');
} */