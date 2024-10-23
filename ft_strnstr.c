/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:02:14 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/23 13:35:31 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);

	i = 0;
	while (little[i])
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (big[i + j] == '\0' && little[i] == '\0')
				return ((char *)big + i);
			j++;
		if (little[i] == '\0')
			return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main()
{
    const char  *big = "AEFBDEFABCDEF";
    const char  *little = "EFA";
    size_t  len = 8;
    char    *t;

    t = ft_strnstr(big, little, len);
    printf("Resutl: %s\n", t);
    return 0;
}*/
