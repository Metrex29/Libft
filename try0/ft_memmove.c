/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:16:04 by raulp             #+#    #+#             */
/*   Updated: 2025/10/16 12:41:00 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_memmove - copy n bytes from src to dest, handling overlapping regions
 *
 * Description:
 *   Copies exactly n bytes from the memory area pointed to by src to the
 *   memory area pointed to by dest. This implementation first copies the
 *   bytes into a temporary local byte buffer, then copies from that buffer
 *   into dest. Using a temporary buffer ensures correct behavior when the
 *   source and destination ranges overlap.
 *
 * Parameters:
 *   dest - pointer to the destination memory area where bytes will be written.
 *   src  - pointer to the source memory area from which bytes will be read.
 *   n    - number of bytes to copy.
 *
 * Return value:
 *   Returns the original value of dest.
 *
 * Behavior and edge cases:
 *   - If n is zero, the function performs no reads or writes and returns dest.
 *   - If n > 0, src and dest must be valid (non-NULL) pointers to at least n
 *     bytes of accessible memory; otherwise the behavior is undefined.
 *   - Overlapping source and destination ranges are handled correctly because
 *     bytes are staged through the temporary buffer.
 *
 * Implementation notes:
 *   - The function copies raw bytes (unsigned char) and does not perform any
 *     alignment or type conversions.
 *   - A variable-length array (unsigned char temp[n]) is used for the
 *     temporary storage. This relies on C99 VLAs and places the temporary
 *     buffer on the stack. For large n this may exhaust stack space and lead
 *     to undefined behavior (stack overflow).
 *   - Portable alternatives include copying in a direction that avoids
 *     overwrite (standard memmove techniques) or allocating the temporary
 *     buffer dynamically (malloc/free) when n is large.
 *
 * Complexity:
 *   Time: O(n) — two passes of n byte copies.
 *   Space: O(n) additional stack space for the temporary buffer.
 *
 * Example:
 *   // To move 10 bytes from src to dest safely, even if ranges overlap:
 *   ft_memmove(dest, src, 10);
 */
void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char temp[n];
	size_t i;
	
	i = 0;
	while(i < n)
	{
		temp[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while(i < n)
	{
		((unsigned char *)dest)[i] = temp[i];
		i++;
	}
	return (dest);
}