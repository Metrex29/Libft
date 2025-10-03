/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:42:05 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/10/01 16:39:08 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
size_t	i;
size_t dst_src = ft_strlen(src);

i = 0;
while(src[i] && i < size - 1)
{
	dst[i] = src[i];
	i++;
}
dst[i] = '\0';

return (dst_src);
}

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char dst1[20];
    char dst2[20];
    const char *src;
    size_t size;
    size_t ret1, ret2;

    // Ejemplo 1: copia normal
    src = "Hola Mundo";
    size = 20;
    ret1 = strlcpy(dst1, src, size);
    ret2 = ft_strlcpy(dst2, src, size);
    printf("Ejemplo 1:\nstrlcpy -> \"%s\" (%zu)\nft_strlcpy -> \"%s\" (%zu)\n\n",
           dst1, ret1, dst2, ret2);

    // Ejemplo 2: size más pequeño que src
    src = "Hola Mundo";
    size = 5;
    ret1 = strlcpy(dst1, src, size);
    ret2 = ft_strlcpy(dst2, src, size);
    printf("Ejemplo 2:\nstrlcpy -> \"%s\" (%zu)\nft_strlcpy -> \"%s\" (%zu)\n\n",
           dst1, ret1, dst2, ret2);

    // Ejemplo 3: src vacío
    src = "";
    size = 10;
    ret1 = strlcpy(dst1, src, size);
    ret2 = ft_strlcpy(dst2, src, size);
    printf("Ejemplo 3:\nstrlcpy -> \"%s\" (%zu)\nft_strlcpy -> \"%s\" (%zu)\n\n",
           dst1, ret1, dst2, ret2);

    // Ejemplo 4: size = 0
    src = "Prueba";
    size = 0;
    ret1 = strlcpy(dst1, src, size);
    ret2 = ft_strlcpy(dst2, src, size);
    printf("Ejemplo 4:\nstrlcpy -> \"%s\" (%zu)\nft_strlcpy -> \"%s\" (%zu)\n\n",
           dst1, ret1, dst2, ret2);

    return 0;
}
