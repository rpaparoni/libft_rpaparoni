/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:01:24 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/04 16:33:19 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcpy(void *dst, const void *src, int n)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;
	int				i;

	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	char *src = "hola wapo";
	char dst[10];
	int n = 10;
	ft_memcpy(dst, src, n);
	printf("%s\n", dst);
	return (0);
}*/