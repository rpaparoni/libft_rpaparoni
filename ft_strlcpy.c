/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:02:01 by rpaparon          #+#    #+#             */
/*   Updated: 2024/09/30 17:48:29 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ft_strlcpy(char *dst, const char *src, int dstsize)
{
	int i;

	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(nb)
{
	if (nb > 9)
	{
		ft_putnbr (nb/ 10);
		ft_putnbr (nb % 10);
	}
	else
	{
		ft_putchar (nb + '0');
	}
}	

int main()
{
	char src[] = "bonjour";
	char dst[10];
	int result = ft_strlcpy(dst, src, 5);
	ft_putnbr(result);
}