/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:01:28 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/26 00:05:40 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy(unsigned char *char_dest, const unsigned char *char_src,
size_t n)
{
	size_t	i;

	if (char_src < char_dest)
	{
		i = n;
		while (i > 0)
		{
			i--;
			char_dest[i] = char_src[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			char_dest[i] = char_src[i];
			i++;
		}
	}
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*char_dest;
	const unsigned char	*char_src;

	if (!dst && !src)
		return (NULL);
	char_dest = (unsigned char *)dst;
	char_src = (const unsigned char *)src;
	if (n == 0 || char_dest == char_src)
		return (dst);
	copy (char_dest, char_src, n);
	return (dst);
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
