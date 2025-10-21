/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:36:09 by raulp             #+#    #+#             */
/*   Updated: 2025/10/21 18:03:04 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int	jump_spaces(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] == c)
		i++;
	return (i);
}

static int count_limiters(char const *s, char c, int i)
{	
	while(s[i] && s[i])
}

char	**ft_split(char const *s, char c)
{
	int	i;

	i = jump_spaces(s,c);

	

}