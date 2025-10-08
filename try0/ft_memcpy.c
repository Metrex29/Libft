/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:10:21 by raulp             #+#    #+#             */
/*   Updated: 2025/10/08 16:29:09 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// SE PUEDE COMENTARRRR
/**
 * If the value of 'tmp' is negative, increments the 'count' variable and
 * converts 'tmp' to its positive equivalent.
 *
 * @param tmp   The integer value to check and potentially convert.
 * @param count The counter to increment if 'tmp' is negative.
 */
void *ft_memcpy(void *dest, const void *src, size_t count)
{
	char *d = (char *)dest;
	const char *s = (const char *)src;
	
	size_t i;

	i = 0;
while (i < count)
{
	d[i] = s[i];
	i++;
}
    return dest;
}
