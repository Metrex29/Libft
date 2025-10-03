/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 10:16:45 by raulp             #+#    #+#             */
/*   Updated: 2025/10/02 11:31:46 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	i = 0;

    if(n == 0)
        return 0;
	while (i < n -1 && s1[i] && s2[i])
	{
		if(s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    const char *s1;
    const char *s2;
    int n;
    int ret1, ret2;

    // Ejemplo 1: iguales
    s1 = "Hola";
    s2 = "Hola";
    n = 4;
    ret1 = strncmp(s1, s2, n);
    ret2 = ft_strncmp(s1, s2, n);
    printf("Ejemplo 1: %d | %d\n", ret1, ret2);

    // Ejemplo 2: diferentes
    s1 = "Hola";
    s2 = "Holo";
    n = 4;
    ret1 = strncmp(s1, s2, n);
    ret2 = ft_strncmp(s1, s2, n);
    printf("Ejemplo 2: %d | %d\n", ret1, ret2);

    // Ejemplo 3: comparación parcial
    s1 = "Hola";
    s2 = "Holo";
    n = 3;
    ret1 = strncmp(s1, s2, n);
    ret2 = ft_strncmp(s1, s2, n);
    printf("Ejemplo 3: %d | %d\n", ret1, ret2);

    // Ejemplo 4: s1 más corta
    s1 = "Ho";
    s2 = "Hola";
    n = 4;
    ret1 = strncmp(s1, s2, n);
    ret2 = ft_strncmp(s1, s2, n);
    printf("Ejemplo 4: %d | %d\n", ret1, ret2);

    // Ejemplo 5: n = 0
    s1 = "Hola";
    s2 = "Holo";
    n = 0;
    ret1 = strncmp(s1, s2, n);
    ret2 = ft_strncmp(s1, s2, n);
    printf("Ejemplo 5: %d | %d\n", ret1, ret2);

    return 0;
}
