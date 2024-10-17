/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:01:05 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/17 17:07:27 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_bzero(void *s, int n)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	char s[] = "hola wapo";
	int n = 10;
	ft_bzero(s, n);
	printf("%d\n", *s);
	return (0);
}*/