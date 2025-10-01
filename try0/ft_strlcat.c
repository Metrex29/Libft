/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:22:01 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/09/30 12:22:07 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"




size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_src = ft_strlen(src);

	int	i;
	int	j;

	i = 0;
	j = 0;
	while(dst[i])
		i++;
	while(src[j] && i < size -1)
	{
		dst[i] = src [j];
		i++;
		j++;   
	}
	dst[i] = '\0';
	return (size + dst_src);
} 
