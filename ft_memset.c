/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:01:36 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/02 14:20:53 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memset(void *b, int c, int len)
{
	unsigned char	*ptr;
	int				i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (0);
}
/*
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
