/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:02:10 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/09 15:09:42 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main()
{
	char str1[] = "Hello, World!";
	char str2[] = "Hello, World!";
	char str3[] = "Hello, there!";
	char str4[] = "Hello, World! How are you?";

	printf("Comparando '%s' y '%s' (n=5): %d\n", str1, str2, ft_strncmp(str1,
				str2, 5));   // 0
	printf("Comparando '%s' y '%s' (n=5): %d\n", str1, str3, ft_strncmp(str1,
				str3, 5));   // 0
	printf("Comparando '%s' y '%s' (n=5): %d\n", str1, str4, ft_strncmp(str1,
				str4, 5));   // 0
	printf("Comparando '%s' y '%s' (n=12): %d\n", str1, str3, ft_strncmp(str1,
				str3, 12)); // Diferente

	return (0);
}