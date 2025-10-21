/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:36:09 by raulp             #+#    #+#             */
/*   Updated: 2025/10/21 10:55:41 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count_word(char const *s, char c)
{
	int i;
	int count;
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
	return (count);
}


char **ft_split(char const *s, char c)
{

	int i;
	int j;
	int count_word;

	char **resul;
	i = 0;
	j = 0;

	if(!s)
		return (NULL);

	count_word = ft_count_word(s, c);
	
	resul = malloc((count_word + 1) * sizeof(char *));
	if(!resul)
		return NULL;
	i = 0;
	// aqui empiezo a copiar las partes a las memorias asaignadas;
	while (s[i] && j < count_word)
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
			resul[j] = malloc(len + 1);
			ft_strlcpy(resul[j], &s[start], len + 1);
			j++;
		}
	}
	resul[j] = NULL;

	
	return resul;
}

/* #include <stdio.h>

int main(void)
{
	char arr1[] = "hola que tal estas";
	char **resul = ft_split(arr1, ' ');

	int i = 0;
	while (resul[i] != NULL)
	{
		printf("%s\n", resul[i]);
		i++;
	}
} */
