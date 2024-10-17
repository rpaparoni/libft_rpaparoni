/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:01:21 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/17 17:13:33 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memchr(const void *s, int c, int n)
{
	unsigned char	*ptr;
	int				i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return (1);
		i++;
	}
	return (0);
}
/*
#include <unistd.h>	

int	main(void)
{
	char *s = "hola wapo";
	int c = 't';
	int n = 10;
	int result = ft_memchr(s, c, n) + '0';
	write(1, &result, 1);
	return (0);
}*/