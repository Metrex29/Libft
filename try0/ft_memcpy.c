/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:10:21 by raulp             #+#    #+#             */
/*   Updated: 2025/10/21 12:51:34 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * If the value of 'tmp' is negative, increments the 'count' variable and
 * converts 'tmp' to its positive equivalent.
 *
 * @param tmp   The integer value to check and potentially convert.
 * @param count The counter to increment if 'tmp' is negative.
 */
void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	char			*d;
	const char		*s;
	size_t			i;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	if (dest == NULL && src == NULL)
        return (dest);
	while (i < count)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
