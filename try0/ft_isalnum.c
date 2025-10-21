/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:24:05 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/10/20 18:57:20 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isalnum - check if a character is alphanumeric
 *
 * @c: character to test, passed as int. The value should be
 *     representable as an unsigned char or be equal to EOF.
 *
 * Return: 1 if c is a digit ('0'..'9') or an alphabetic letter
 *         ('a'..'z' or 'A'..'Z'), otherwise 0.
 *
 * Notes:
 * - Behavior mirrors the standard C library isalnum for typical inputs.
 * - This function does not perform locale-specific checks; it only
 *   tests the ASCII ranges for digits and letters.
 */
int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || ((c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z')))
		return (1);
	else
		return (0);
}
