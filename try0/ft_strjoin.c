/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 10:35:58 by raulp             #+#    #+#             */
/*   Updated: 2025/10/08 11:06:22 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t arr1;
	size_t arr2;
	int i;
	int j;
	
	i = 0;
	j = 0;
	if (!s1 || !s2) return NULL;

	arr1 = ft_strlen(s1);
	arr2 = ft_strlen(s2);
	char *p = malloc(arr1 + arr2 +1);
	while (s1[i])
	{	
		p[i] = s1[i];
		i++;
	}
	while(s2[j])
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i+j] = '\0';
	return p;
}