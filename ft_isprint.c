/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:11:15 by rpaparon          #+#    #+#             */
/*   Updated: 2024/09/30 14:46:38 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
#include <unistd.h>
int main()
{	
	int result = ft_isprint('a');
	char c = result + '0';
	write(1, &c, 1);
	int result2 = ft_isprint(' ');
	char c2 = result2 + '0';
	write(1, &c2, 1);
}*/