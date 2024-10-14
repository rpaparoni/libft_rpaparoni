/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:18:28 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/14 14:05:41 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;

	// Verificar si s1 o set son NULL
	if (!s1 || !set)
		return (NULL);

	// Inicializar los índices para el inicio y el final de la cadena
	start = 0;
	end = ft_strlen(s1);

	// Encontrar el primer carácter que no esté en el conjunto 'set'
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;

	// Encontrar el último carácter que no esté en el conjunto 'set'
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;

	// Retornar la subcadena "recortada"
	return (ft_substr(s1, start, end - start));
}

#include <stdio.h>

int main()
{
	char *s1 = "   bon dia   ";
	char *set = " ";
	char *str = ft_strtrim(s1, set);
	printf("%s\n", str);
	free(str);
	return (0);
}
