/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:02:19 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/04 14:05:37 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i += 1;
	while (i != 0)
	{
		if (str[i] == c)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	return (NULL);
}

/*
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