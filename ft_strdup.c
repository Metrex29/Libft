/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 14:58:24 by raulp             #+#    #+#             */
/*   Updated: 2025/10/22 15:06:13 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	size_t	i;
	size_t	len;
	char	*arr;

	i = 0;
	len = ft_strlen (string);
	arr = malloc (len + 1);
	if (!arr)
		return (NULL);
	while (string[i])
	{
		arr[i] = string[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
