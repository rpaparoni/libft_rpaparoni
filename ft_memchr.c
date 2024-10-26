/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:01:21 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/26 13:36:29 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
/*
#include <unistd.h>	

int	main(void)
{
	char *s = "hola wapo";
	int c = 'w';
	size_t n = 10;
	char *result = ft_memchr(s, c, n);
	if (result != NULL)
		write(1, result, 1);
	else
		write(1, "Character not found\n", 20);
	return (0);
}*/