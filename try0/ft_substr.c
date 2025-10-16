/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:25:25 by raulp             #+#    #+#             */
/*   Updated: 2025/10/16 16:44:35 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned i;
	size_t j;
	size_t arr1;

	i = 0;
	j = 0;
	// con esto declaro el tamaño con espacio para el \0
	char *p = malloc(len + 1);
	// declaro el tamaño de mi s
	arr1 = ft_strlen(s);
	if (!s) return NULL;
	// si mi inicio es mayo que mi array, len = 0; ya que quieor que me devuelva algo vacio
	if(start >= arr1)
		len = 0;
	// aqui ajustamos el espacio sobrante, es decir, si me sobra memoria, ajusto el len a arr1 - start, para solo copiar hasta el fin de la cadena
	if(len > arr1 - start)
		len = arr1 -start;	
	while (i < start) i++;
	while (j < len && s[i])
		p[j++] = s[i++];
	p[j] = '\0';
	return p;
}
