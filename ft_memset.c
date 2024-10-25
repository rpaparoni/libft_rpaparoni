/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:01:36 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/25 23:50:18 by rpaparon         ###   ########.fr       */
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
	char buffer1[20]; // Crear un buffer de 20 bytes
	ft_memset(buffer1, 'A', 10);
	buffer1[10] = '\0';
		// Asegurarse de agregar el carácter nulo al final para imprimir
	// Mostrar el resultado de ft_memset
	printf("Resultado de ft_memset: %s\n", buffer1);
	return (0);
}*/
