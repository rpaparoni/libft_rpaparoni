/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:42:08 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/24 19:25:09 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*mem;
	size_t	size;

	size = ft_strlen(s) + 1;
	mem = (char *)malloc(size);
	if (mem != NULL)
		ft_strlcpy(mem, s, size);
	return (mem);
}
/*
#include <stdio.h>

int main()
{
	char *s = "bon dia";
	char *str = ft_strdup(s);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
