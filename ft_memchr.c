/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <cpicon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 19:14:49 by raulp             #+#    #+#             */
/*   Updated: 2025/10/24 14:44:50 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int c, size_t count)
{
	char	*buf_c;
	size_t	i;

	i = 0;
	buf_c = (char *)buf;
	while (i < count)
	{
		if (buf_c[i] == (char)c)
			return (&buf_c[i]);
		i++;
	}
	return (NULL);
}
