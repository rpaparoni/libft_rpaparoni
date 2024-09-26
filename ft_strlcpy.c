/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:02:01 by rpaparon          #+#    #+#             */
/*   Updated: 2024/09/26 13:44:01 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ft_strlcpy(char *dst, const char *src, int dstsize)
{
	int i;

	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}