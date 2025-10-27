/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <cpicon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 16:25:25 by raulp             #+#    #+#             */
/*   Updated: 2025/10/24 14:45:02 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	write_subs(char const *s, unsigned int start, size_t len, char *p)
{
	unsigned int	i;
	size_t			j;

	i = 0;
	j = 0;
	while (i < start)
		i++;
	while (j < len && s[i])
		p[j++] = s[i++];
	p[j] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	arr1;
	char	*p;

	if (!s)
		return (NULL);
	arr1 = ft_strlen (s);
	if (start >= arr1)
	{
		p = malloc(1);
		if (!p)
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	if (len > arr1 - start)
		len = arr1 - start;
	p = malloc (len + 1);
	if (!p)
		return (NULL);
	write_subs (s, start, len, p);
	return (p);
}
