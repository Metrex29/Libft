/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 19:14:49 by raulp             #+#    #+#             */
/*   Updated: 2025/10/21 11:57:04 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_memchr - search for a byte in a memory block
 *
 * Searches the first 'count' bytes of the memory area pointed to by 'buf'
 * for the first occurrence of the byte value (unsigned char)c.
 *
 * Parameters:
 *   buf   - pointer to the memory area to be searched. If count > 0, buf must
 *           point to a valid memory region.
 *   c     - integer value whose low-order byte (converted to unsigned char)
 *           is the byte value to search for.
 *   count - number of bytes to examine starting at buf.
 *
 * Return:
 *   A pointer to the matching byte within buf (type void *). If the byte is
 *   not found within the first 'count' bytes, the function returns NULL.
 *
 * Notes:
 *   - The comparison is performed with (unsigned char)c to ensure correct
 *     behavior for negative or large values of c.
 *   - The function does not modify the memory area.
 *   - Behavior is undefined if buf is NULL and count > 0.
 *   - Time complexity is O(count) in the worst case.
 */
void	*ft_memchr(const void *buf, int c, size_t count)
{
	char *buf_c;
	size_t i;

	i = 0;
	buf_c = (char *)buf;

	while (i < count)
	{
		if (buf_c[i] == c)
			return (&buf_c[i]);
		i++;
	}
	if (c == '\0')
		return (&buf_c[i]);
	return (NULL);
}
