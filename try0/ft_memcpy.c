/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:10:21 by raulp             #+#    #+#             */
/*   Updated: 2025/10/02 15:00:33 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
