/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:16:04 by raulp             #+#    #+#             */
/*   Updated: 2025/10/21 16:40:12 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*cpy_dest;
	const char	*cpy_src;
	size_t		i;

	cpy_dest = (char *)dest;
	cpy_src = (char *)src;
	if (n == 0 || cpy_src == cpy_dest)
		return (dest);
	if (cpy_dest > cpy_src && cpy_dest < cpy_src + n)
	{
		i = n;
		while (i--)
			cpy_dest[i] = cpy_src[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			cpy_dest[i] = cpy_src[i];
			i++;
		}
	}
	return (dest);
}
