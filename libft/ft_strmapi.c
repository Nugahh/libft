/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 21:38:27 by fwong             #+#    #+#             */
/*   Updated: 2022/05/15 22:35:02 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	int	j;
	char	*str;

	i = 0;
	while (s[i])
		i++;
	str = malloc(sizeof(char) * (i + 1));
	j = 0;
	while (s[j])
	{
		str[j] = f(j, s[j]);
		j++;
	}
	return (str);
}

char f_iter(unsigned int i, char c)
{
    i = 1;
    char str;
    str = c + i;
    return (str);
}

#include <stdio.h>

int main()
{
    char str1[] = "abc";
    char* str2;
    str2 = ft_strmapi(str1, *f_iter);
    printf("%s\n", str2);
}