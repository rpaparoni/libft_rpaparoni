/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:53:19 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/17 17:12:45 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
/*
#include <unistd.h>
int main()
{	
	int result = ft_isdigit('a');
	char c = result + '0';
	write(1, &c, 1);
	int result2 = ft_isdigit('1');
	char c2 = result2 + '0';
	write(1, &c2, 1);
}*/