/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 09:37:49 by raulp             #+#    #+#             */
/*   Updated: 2025/10/06 09:51:48 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *string1, const char *string2)
{
	int i;

	i = 0;

	while (string1[i])
	{
		if(string1[i] == string2[i])
			return ((char *)&string1[i]);
	}
	return NULL;
}