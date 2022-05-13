/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwong <fwong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 15:01:16 by fwong             #+#    #+#             */
/*   Updated: 2022/05/07 15:40:36 by fwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb != 0 && ((nmemb * size) / nmemb != size))
		return (0);
	ptr = malloc (nmemb * size);
	if (!ptr)
		return (0);
	ft_bzero (ptr, nmemb * size);
	return (ptr);
}
/* 
int main()
{
	int i, n;
	int *a;
	printf("Number of elements to be entered:");
	scanf("%d",&n);
	a = (int*)ft_calloc(n, sizeof(int));
	printf("Enter %d numbers:\n",n);
	for( i=0 ; i < n ; i++ )
		{
			scanf("%d",&a[i]);
		}
		printf("The numbers entered are: ");
	for( i=0 ; i < n ; i++ )
		{
			printf("%d ",a[i]);
		}
	return(0);
} */