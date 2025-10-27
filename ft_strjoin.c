/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <cpicon-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 10:35:58 by raulp             #+#    #+#             */
/*   Updated: 2025/10/24 14:44:56 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	insert_array(char const *s1, char const *s2, char *p)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i + j] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2 )
{
	size_t	arr1;
	size_t	arr2;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	arr1 = ft_strlen(s1);
	arr2 = ft_strlen(s2);
	p = malloc(arr1 + arr2 + 1);
	if (!p)
		return (NULL);
	insert_array(s1, s2, p);
	return (p);
}
