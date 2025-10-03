/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:58:43 by raulp             #+#    #+#             */
/*   Updated: 2025/10/02 10:14:07 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strrchr(const char *s, int c)
{
	int	i;

	size_t punt = ft_strlen(s);
	i=punt;
	while(i >= 0)
	{
		if(s[i] == c )
			return ((char *)&s[i]);
		i--;
	}
	return NULL;
}
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
     char *s = "Hola Mundo";

    // Buscar desde atrás 'o'
    char *res1 = strrchr(s, 'o');        // original de la libc
    char *res2 = ft_strrchr(s, 'o'); // tu versión hacia atrás

    printf("Original strrchr: %s\n", res1);
    printf("ft_strchr_back:   %s\n\n", res2);

    // Caso: carácter al inicio
    res1 = strrchr(s, 'H');
    res2 = ft_strrchr(s, 'H');
    printf("Buscar 'H': %s | %s\n\n", res1, res2);

    // Caso: no encontrado
    res1 = strrchr(s, 'z');
    res2 = ft_strrchr(s, 'z');
    printf("Buscar 'z': %p | %p\n\n", (void*)res1, (void*)res2);

    // Caso: '\0'
    res1 = strrchr(s, '\0');
    res2 = ft_strrchr(s, '\0');
    printf("Buscar '\\0': %p | %p\n", (void*)res1, (void*)res2);

    return 0;
}
