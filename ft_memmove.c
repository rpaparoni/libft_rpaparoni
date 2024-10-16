/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:01:28 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/16 16:16:49 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *ptr_dst;
    const unsigned char *ptr_src;
    unsigned char *tmp;
    size_t i;

    // Asignar memoria temporal para el buffer
    tmp = (unsigned char *)malloc(len * sizeof(unsigned char));
    if (tmp == NULL)
        return (NULL);  // Si malloc falla, devolver NULL

    ptr_dst = (unsigned char *)dst;
    ptr_src = (const unsigned char *)src;

    // Copiar src a tmp (buffer temporal)
    i = 0;
    while (i < len)
    {
        tmp[i] = ptr_src[i];
        i++;
    }

    // Copiar desde tmp a dst (buffer temporal a destino)
    i = 0;
    while (i < len)
    {
        ptr_dst[i] = tmp[i];
        i++;
    }

    // Liberar memoria temporal
    free(tmp);

    return (dst);  // Devolver el puntero al destino
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[] = "12345";
    ft_memmove(src + 2, src, 3);
    printf("Resultado: %s\n", src);  // Debe imprimir "12123"
    return 0;
}*/