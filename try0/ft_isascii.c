/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:35:49 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/10/16 17:14:16 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isacii - Check if a value is an ASCII character.
 *
 * Description:
 *   This function tests if the given integer 'c' is an ASCII code.
 *   ASCII codes are numbers from 0 to 127 inclusive.
 *   If 'c' is in this range, the function returns 1. Otherwise it returns 0.
 *
 * Parameters:
 *   int c - the value to test. It can be any integer.
 *
 * Return value:
 *   1  - if 0 <= c <= 127 (c is an ASCII character)
 *   0  - if c < 0 or c > 127 (not an ASCII character)
 *
 * Examples:
 *   ft_isacii('A')  -> 1   // 'A' is 65 in ASCII
 *   ft_isacii(10)   -> 1   // newline is 10 in ASCII
 *   ft_isacii(200)  -> 0   // 200 is not in ASCII range
 *   ft_isacii(-1)   -> 0   // negative values are not ASCII
 *
 * Notes:
 *   - The function works with any int, but when calling it with a char
 *     that may be signed and negative, cast to unsigned char first if
 *     you want to test the byte value (e.g., ft_isacii((unsigned char)ch)).
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}