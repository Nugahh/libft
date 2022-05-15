/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:57:45 by fwong             #+#    #+#             */
/*   Updated: 2022/05/15 13:43:40 by fwong            ###   ########.fr       */
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

char	*ft_malloc_and_fill(char const *s, char c, int wordCount)
{
	int	index;
	int	j;
	int	k;
	char	*str;
	size_t	charCount;

	index = 0;
	j = 0;
	while (wordCount--)
	{
		while (s[j] == c)
			index++;
		charCount = ft_count_char(s, c, index);
		str = malloc(sizeof(char) * charCount + 1);
		if (!str)
			return (NULL);			
		printf("%ld\n", charCount);
		k = charCount + j;
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
	int		i;
	int		j;
	size_t		wordCount;
	char	**tab;
	
	wordCount = ft_count_words(s, c);
	tab = malloc(sizeof(char *) * ft_count_words((char *)s, c));
	if (!tab)
		return (NULL);
	printf("caca\n");
	ft_malloc_and_fill(s, c, wordCount);
	return (tab);
}

int main()
{
	char a[] = "Bonjour je nnn  ds  ds";

	// ft_split(a, '/');ls
	
	// printf("%d", ft_count_separator(a, ' '));
	ft_split(a, ' ');
}