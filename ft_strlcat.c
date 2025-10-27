/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <cpicon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:22:01 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/10/24 14:44:57 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_src;
	size_t	dst_dst;
	size_t	i;
	size_t	j;

	dst_src = ft_strlen(src);
	dst_dst = ft_strlen(dst);
	if (size <= 0 || size <= dst_dst)
		return (size + dst_src);
	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_dst + dst_src);
}
