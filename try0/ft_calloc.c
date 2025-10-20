/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:02:28 by raulp             #+#    #+#             */
/*   Updated: 2025/10/20 16:25:23 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_calloc - allocate memory for an array and zero it
 * @number: number of elements to allocate
 * @size: size in bytes of each element
 *
 * Allocates memory for an array of @number elements of @size bytes each,
 * and initializes all bytes in the allocated block to zero.
 *
 * Return: A pointer to the allocated and zero-initialized memory, or NULL
 * if the allocation fails. The returned pointer should be freed by the
 * caller using free() when no longer needed.
 *
 * Notes:
 * - The total number of bytes requested is (size_t)number * (size_t)size.
 *   If this multiplication overflows size_t, the behavior is undefined.
 * - If either parameter is zero, behavior follows the implementation-defined
 *   semantics of malloc/calloc on zero-size allocations (an implementation-
 *   defined pointer which may be NULL may be returned).
 */
	void *ft_calloc(size_t number, size_t size)
	{
		void *ptr;
		
		ptr = malloc(number * sizeof(ptr));
		ft_memset(ptr,'\0',number * size);
		return ptr;	
	}

