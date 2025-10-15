/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:36:09 by raulp             #+#    #+#             */
/*   Updated: 2025/10/15 19:41:07 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{

	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	count = 0;
	char **resul;

	while (s[i])
	{
		// con esto tengo el contador de palabras.
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	// reservar espacio para las palarbas, mas el nulo
	resul = malloc((count + 1) * sizeof(char *));
	// reutilizo variables;

	i = 0;
	// aqui empiezo a copiar las partes a las memorias asaignadas;
	while (s[i] && j < count)
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			int start = i;
			int len = 0;

			while (s[i] && s[i] != c)
			{
				i++;
				len++;
			}
			resul[j] = malloc(len);
			ft_strlcpy(resul[j], &s[start],len +1);
			j++;
		}
	}
	resul[j] = NULL;

	return resul;
	free(resul);
	
}

#include <stdio.h>

int main(void)
{
	char arr1[] = "hola que tal estas";
	char **resul = ft_split(arr1, ' ');

 int i = 0;
    while (resul[i] != NULL)
    {
        printf("%s\n", resul[i]);
        i++;
    }}
