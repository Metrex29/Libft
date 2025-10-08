/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:07:04 by raulp             #+#    #+#             */
/*   Updated: 2025/10/08 13:48:11 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int ini;
	int j;
	int end;
	ini = 0;
	j = 0;
	
	end = ft_strlen(s1) -1;
	while(s1[ini] && ft_strchr(set,s1[ini]))
		ini++;
	while(end >= ini && ft_strchr(set,s1[end]))
		end --;
	char *arrTrim = malloc(end-ini +2);

	while(ini <= end)
	{
		arrTrim[j] = s1[ini];
		ini++; 
		j++;
	}
	arrTrim[j] = '\0';
	return arrTrim;
}