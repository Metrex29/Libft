/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 10:50:10 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/10/16 12:32:10 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if a character is printable.
 *
 * This function determines whether the given integer value corresponds
 * to a printable ASCII character, including space (' ') but excluding
 * the DEL character.
 *
 * @param c The character to check, passed as an int.
 * @return 1 if the character is printable (ASCII 32 to 126), 0 otherwise.
 */
int ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}
