/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:57:45 by fwong             #+#    #+#             */
/*   Updated: 2022/05/13 21:39:40 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_count_char(char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			i++;
			j++;
		}
	}
	return (j);
}

int	ft_count_words(char *str, char c)
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

/* char	*ft_without_separator(char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] == c)
		i++;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			return str[i];
			i++;
		}
	}
	return (str);
} */

char	*ft_fill(char *str, int c)
{
	int	i;
	int	j;
	char	*word;

	i = 0;
	j = 0;
	while (word[i])
	{
		if (str[i] && str[i] == c)
			i++;
		else
		{
			tab[i][j] = str[i];	
		}
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	size_t		wordCount;
	size_t		charCount;
	char	**tab;
	
	wordCount = ft_count_separator(s, c);
	tab = malloc(sizeof(char *) * ft_count_separator((char *)s, c));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (wordCount--)
	{
		while (s[j] == c)
			j++;
		charCount = ft_count_char(s + j, c);
		tab[i] = (char) malloc(sizeof(char) * charCount);
		i++;
		while (s[j] != c)
			j++;
	}
	tab = ft_fill(s, c);
	return (tab);
}

int main()
{
	char a[] = "Bonjour je nnn  ds  ds";

	// ft_split(a, '/');
	
	// printf("%d", ft_count_separator(a, ' '));
	printf("%s", a + 2);
}