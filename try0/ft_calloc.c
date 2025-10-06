/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 12:02:28 by raulp             #+#    #+#             */
/*   Updated: 2025/10/06 14:57:37 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_calloc(size_t number, size_t size)
{
	void *ptr;
	ptr = malloc(number * sizeof(ptr));
	ft_memset(ptr,'0',number * size);
	return ptr;	
}

