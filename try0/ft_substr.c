/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:25:25 by raulp             #+#    #+#             */
/*   Updated: 2025/10/21 14:43:19 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	size_t			arr1;
	char			*p;

	i = 0;
	j = 0;
	p = malloc (len + 1);
	if(!p)
		return NULL;
	arr1 = ft_strlen (s);
	if (!s)
		return (NULL);
	if (start >= arr1)
		len = 0;
	if (len > arr1 - start)
		len = arr1 - start;
	while (i < start)
		i++;
	while (j < len && s[i])
		p[j++] = s[i++];
	p[j] = '\0';
	return (p);
}
