/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:58:24 by raulp             #+#    #+#             */
/*   Updated: 2025/10/06 15:38:58 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *string)
{
	size_t i;
	size_t len;
	char *arr;
	i = 0;

	len = ft_strlen(string);

	arr = malloc(len);

	while (string[i])
	{
		arr[i] = string[i];
		i++;
	}
	arr[i] = '\0';
	return arr;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    const char *original = "Hola Mundo";
    char *copia;

    copia = ft_strdup(original); // duplicar cadena
    if (copia == NULL) {
        printf("Error al duplicar la cadena\n");
        return 1;
    }

    printf("Original: %s\n", original);
    printf("Copia: %s\n", copia);

    // Modificar la copia para verificar que son independientes
    copia[0] = 'h';
    printf("Copia modificada: %s\n", copia);
    printf("Original después de modificar la copia: %s\n", original);

    free(copia); // liberar memoria
    return 0;
}
