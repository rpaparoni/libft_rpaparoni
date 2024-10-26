/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:02:19 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/26 14:49:30 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*last_occurrence;

	i = 0;
	last_occurrence = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			last_occurrence = (char *)&s[i];
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (last_occurrence);
}
/*
#include <stdio.h>

int	main(void)
{
	const char *texto = "hola adios hola";
	char *resultado = ft_strrchr(texto, 'h');

	if (resultado != NULL)
	{
		printf("Carácter encontrado: %c\n", *resultado);
		printf("Posición: %ld\n", resultado - texto);
	}
	else
	{
		printf("Carácter no encontrado.\n");
	}

	return (0);
}*/