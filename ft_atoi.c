/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:00:57 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/14 15:39:34 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;

	result = 0;
	while (*str == ' ')
	{
		str++;
	}
	if (*str == '-')
	{
		str++;
		while (*str >= '0' && *str <= '9')
		{
			result = result * 10 + *str - '0';
			str++;
		}
		return (-result);
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi("      -42"));
}*/