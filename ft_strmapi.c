/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:16:50 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/26 00:18:10 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	size_t	i;
	char	*result;

	size = ft_strlen(s);
	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	result = (char *)malloc(size + 1);
	if (result == NULL)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
int main(void)
{
	char *original = "abcdefgh";
	char *modified;

	modified = ft_strmapi(original, [](unsigned int i, char c) {
		return (i % 2 == 0) ? c - 32 : c; // Mayúscula si el índice es par
	});

	if (modified == NULL)
	{
		printf("Error: memoria no asignada\n");
		return (1);
	}
	printf("Cadena original: %s\n", original);
	printf("Cadena modificada: %s\n", modified);

	free(modified); // Liberamos la memoria asignada
	return (0);
}*/