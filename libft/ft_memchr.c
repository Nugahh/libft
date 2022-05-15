/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 14:00:44 by fwong             #+#    #+#             */
/*   Updated: 2022/05/07 14:38:46 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	return (0);
}
/* 
int	main()
{
	char a[50] = "bonjour";
	
	char * b = memchr(a, 'j', 8);
	
	printf("%s", b);
} */