/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:01:48 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/03 17:21:34 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] == c)
		{
			return((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}

int main()
{
	const char *s;
	s[] = "hola wapo";
	int c = "w";
	write(1, &*ft_strchr(*s, c),1);
}
