/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:25:25 by raulp             #+#    #+#             */
/*   Updated: 2025/10/06 18:35:30 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	int i;

	i = 0;
	char *p = malloc(len);

	while (i < start)
		i++;
	if (i == start)
	{
		while (i < len)
		{
			p = s[i];
		}
	}
	return NULL;
}