/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:01:28 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/03 13:34:38 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memmove(void *dst, const void *src, int len)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;
	unsigned char	*tmp;
	int				i;

	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		tmp[i] = ptr_src[i];
		i++;
	}
	if(i == len)
	{
		i = 0;
		while (i < len)
		{
			ptr_dst[i] = tmp[i];
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[] = "12345";
    ft_memmove(src + 2, src, 3);
    printf("Resultado: %s\n", src);  // Debe imprimir "12123"
    return 0;
}*/