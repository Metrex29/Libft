/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:22:01 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/10/20 14:36:28 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_src = ft_strlen(src);
	size_t dst_dst = ft_strlen(dst);

	size_t i;
	size_t j;

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
// #include <stdio.h>
// #include <string.h>
// #include "libft.h"

// int main(void)
// {
//     char dst1[20] = "";
//     char dst2[20] = "";
//     const char *src = "";
//     size_t size = 20;

//     size_t ret1 = strlcat(dst1, src, size);
//     size_t ret2 = ft_strlcat(dst2, src, size);

//     printf("strlcat -> dst: \"%s\" | return: %zu\n", dst1, ret1);
//     printf("ft_strlcat -> dst: \"%s\" | return: %zu\n", dst2, ret2);

//     return 0;
// }