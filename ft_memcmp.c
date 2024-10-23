/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:04:34 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/23 15:38:35 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*ptr1;
	unsigned const char	*ptr2;
	size_t	i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return ((int)(ptr1[i] - ptr2[i]));
		i++;
	}
	return (0);
}
/*
#include <unistd.h>

int	main(void)
{
	char *s1 = "hola wapo";
	char *s2 = "hola wapo";
	int n = 9;
	int	result = ft_memcmp(s1, s2, n);
	if  (result == 0)
		write(1, "0", 1);
	else if (result > 0)
		write(1, "1", 1);
	else
		write(1, "-1", 2);
	
	return (0);
}*/