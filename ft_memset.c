/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:01:36 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/26 13:55:49 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	s = (unsigned char *)ptr;
	i = 0;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[20];
	ft_memset(buffer1, 'A', 10);
	str[10] = '\0';
	printf("%s\n", str);
	return (0);
}*/
