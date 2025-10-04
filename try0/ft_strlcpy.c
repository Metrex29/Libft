/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:42:05 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/10/04 11:25:59 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
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