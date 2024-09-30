/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:01:10 by rpaparon          #+#    #+#             */
/*   Updated: 2024/09/30 14:43:20 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
#include <unistd.h>
int main()
{	
	int result = ft_isascii('a');
	char c = result + '0';
	write(1, &c, 1);
	int result2 = ft_isascii(128);
	char c2 = result2 + '0';
	write(1, &c2, 1);
}*/