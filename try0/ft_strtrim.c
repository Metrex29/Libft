/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:07:04 by raulp             #+#    #+#             */
/*   Updated: 2025/10/15 16:07:37 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strtrim - Trims characters from the beginning and end of a string.
 *
 * This function removes all characters from the beginning and end of the string 's1'
 * that are present in the string 'set'. The resulting trimmed string is allocated
 * dynamically and must be freed by the caller.
 *
 * @param s1: The input string to be trimmed.
 * @param set: The set of characters to trim from both ends of 's1'.
 *
 * @return A newly allocated string with the specified characters removed from the
 *         beginning and end. Returns NULL if memory allocation fails.
 *
 * Example:
 *     ft_strtrim("  hello  ", " ") returns "hello"
 *     ft_strtrim("--abc--", "-") returns "abc"
 */
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