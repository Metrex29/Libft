/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 09:22:26 by raulp             #+#    #+#             */
/*   Updated: 2025/10/20 19:35:38 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_memcmp - Compare the first n bytes of two memory areas
 *
 * @s1: pointer to the first memory area
 * @s2: pointer to the second memory area
 * @n:  number of bytes to compare
 *
 * Compares up to n bytes of the memory areas pointed to by s1 and s2.
 * Comparison is performed byte-by-byte after casting to unsigned char,
 * ensuring a well-defined ordering for all byte values. The comparison
 * stops at the first differing byte or after n bytes have been compared.
 *
 * Return:
 *   < 0 if the first differing byte in s1 is less than the corresponding
 *       byte in s2 (as unsigned char),
 *    0 if all compared bytes are equal,
 *   > 0 if the first differing byte in s1 is greater than the corresponding
 *       byte in s2 (as unsigned char).
 *
 * Notes:
 * - Both s1 and s2 must point to valid memory regions of at least n bytes.
 * - Overlapping memory regions are permitted since the function only reads
 *   bytes; behavior is undefined if either pointer is invalid or the memory
 *   is not accessible for reading.
 * - Time complexity is O(n).
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1c;
	unsigned char	*s2c;
	size_t			i;

	s1c = (unsigned char *)s1;
	s2c = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1c[i] != s2c[i])
			return (s1c[i] - s2c[i]);
		i++;
	}
	return (0);
}
