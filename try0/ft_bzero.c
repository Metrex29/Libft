/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:06:45 by raulp             #+#    #+#             */
/*   Updated: 2025/10/16 17:04:20 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * bzero - set memory to zero
 * @s: pointer to the memory area to be zeroed
 * @n: number of bytes to set to zero
 *
 * Sets the first @n bytes of the memory area pointed to by @s to zero
 * (bytes containing '\0'). This function does not return a value.
 * If @n is zero, the function has no effect. Passing a NULL pointer
 * for @s when @n > 0 results in undefined behavior.
 *
 * This implementation delegates to ft_memset(s, 0, n).
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}