/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 14:58:43 by raulp             #+#    #+#             */
/*   Updated: 2025/10/02 10:12:42 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i=0;
	while(s[i])
	{
		if(s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return NULL;
}
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    const char *s = "Hola Mundo";
    char c = 'M';

    char *res1 = strchr(s, c);
    char *res2 = ft_strchr(s, c);

    printf("Original strchr: %s\n", res1);
    printf("ft_strchr:       %s\n", res2);

    // Caso no encontrado
    c = 'z';
    printf("Original strchr (no encontrado): %p\n", strchr(s, c));
    printf("ft_strchr (no encontrado):       %p\n", ft_strchr(s, c));

    // Caso '\0'
    c = '\0';
    printf("Original strchr (\\0): %s\n", strchr(s, c));
    printf("ft_strchr (\\0):       %s\n", ft_strchr(s, c));

    return 0;
}
