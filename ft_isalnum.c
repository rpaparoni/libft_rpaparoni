/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:10:49 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/17 17:10:34 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
		|| (c >= 48 && c <= 57));
}
/*
#include <unistd.h>
int main()
{	
	int result = ft_isalnum('?');
	char c = result + '0';
	write(1, &c, 1);
	int result2 = ft_isalnum('a');
	char c2 = result2 + '0';
	write(1, &c2, 1);
}*/