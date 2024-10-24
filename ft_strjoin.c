/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:33:34 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/24 18:17:08 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s3 = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1, s1_len + 1);
	ft_strlcat(s3, s2, s1_len + s2_len + 1);
	return (s3);
}
/*
#include <stdio.h>

int main()
{
	char	*s1 = "epale";
	char	*s2 = " mundo";
    char *result = ft_strjoin(s1, s2);
    
    // Imprimir el resultado
    if (result)
    {
        printf("%s\n", result);
        free(result);  // Liberar la memoria para evitar fugas
    }
    else
    {
        printf("Error al unir las cadenas.\n");
    }

    return 0;
}*/