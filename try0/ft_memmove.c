/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:16:04 by raulp             #+#    #+#             */
/*   Updated: 2025/10/04 19:11:52 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char temp[n];
	size_t i;
	
	i = 0;
	while(i < n)
	{
		temp[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while(i < n)
	{
		((unsigned char *)dest)[i] = temp[i];
		i++;
	}
	return (dest);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[] = "abcdef";

	// Caso 1: copiar sin solapamiento
	ft_memmove(str1 + 2, str1, 3);
	printf("Resultado 1: %s\n", str1); // ababc f

	char str2[] = "123456";

	// Caso 2: copiar con solapamiento (hacia atrás)
	ft_memmove(str2, str2 + 2, 4);
	printf("Resultado 2: %s\n", str2); // 345656

	char str3[] = "Hola Mundo";

	// Caso 3: copiar dentro de sí mismo
	ft_memmove(str3 + 5, str3, 4);
	printf("Resultado 3: %s\n", str3); // Hola Holado

	return (0);
}
