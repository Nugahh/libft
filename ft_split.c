/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:57:45 by fwong             #+#    #+#             */
/*   Updated: 2022/05/14 20:27:55 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_count_char(char const *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c)
	{
		i++;
		j++;
	}
	return (j);
}

int	ft_count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] != '\0' && str[i] != c)
				i++;
		}
	}
	return (count);
}

char	*ft_fill(char *s1, char const *s2, int i, int c)
{
	while (s2[i] && s2[i] != c)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}

char	**ft_split(char const *s, char c)
{
	// int		i;
	int		j;
	size_t	wordCount;
	size_t	charCount;
	char	**tab;
	
	wordCount = ft_count_words(s, c);
	tab = malloc(sizeof(char *) * wordCount + 1);
	if (!tab)
		return (NULL);
	// i = 0;
	j = 0;
	printf("%d\n", j);
	while (wordCount--)
	{
		charCount = ft_count_char(s + j, c);
		printf("%d\n", j);
		/* tab[i] = malloc(sizeof(char) * charCount + 1);
		if (!tab[i])
			return (NULL);
		ft_fill(tab[i], s, j, c);
		i++; */
		s += charCount;
	}
	return (tab);
}

int    main(int ac, char **av)
{
   int    i;
   char    **tbl;

   (void) ac;
   tbl = ft_split(av[1], av[2][0]);    
   i = 0;
   while (tbl[i])
   {
       printf("%d = %s\n", i, tbl[i]);
       i++;
   }
   return (0);
}

/* int main()
{
	char a[] = "salut/les/amis";
	printf("%s", a);
} */