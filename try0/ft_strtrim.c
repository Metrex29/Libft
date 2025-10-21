/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:07:04 by raulp             #+#    #+#             */
/*   Updated: 2025/10/21 14:46:08 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		ini;
	int		j;
	int		end;
	char	*arr_trim;

	ini = 0;
	j = 0;
	end = ft_strlen(s1) -1;
	while (s1[ini] && ft_strchr (set, s1[ini]))
		ini++;
	while (end >= ini && ft_strchr (set, s1[end]))
		end --;
	arr_trim = malloc (end - ini +2);
	if(!arr_trim)
		return NULL;
	while (ini <= end)
	{
		arr_trim[j] = s1[ini];
		ini++;
		j++;
	}
	arr_trim[j] = '\0';
	return (arr_trim);
}
