/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <cpicon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 12:34:11 by raulp             #+#    #+#             */
/*   Updated: 2025/10/24 14:44:52 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)dest;
	while (i < count)
	{
		p[i] = c;
		i++;
	}
	return (dest);
}
