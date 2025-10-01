/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <cpicon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:42:05 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/10/01 12:22:06 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t size)
{
size_t	i;
size_t dst_src = ft_strlen(src);

i = 0;
while(src[i] && i < size - 1)
{
	dst[i] = src[i];
	i++;
}
dst[i] = '\0';

return (dst_src);
}