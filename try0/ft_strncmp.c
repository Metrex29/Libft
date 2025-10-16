/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raulp <raulp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 10:16:45 by raulp             #+#    #+#             */
/*   Updated: 2025/10/16 16:40:26 by raulp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strncmp - compare up to n characters of two null-terminated strings
 *
 * Description:
 *   Attempts to behave like the standard strncmp: compare the characters of
 *   the strings s1 and s2 lexicographically, at most n characters, and return
 *   an integer less than, equal to, or greater than zero if s1 is found,
 *   respectively, to be less than, to match, or be greater than s2.
 *
 * Parameters:
 *   s1  - pointer to the first null-terminated string to compare
 *   s2  - pointer to the second null-terminated string to compare
 *   n   - maximum number of characters to compare (size_t)
 *
 * Return value (int):
 *   - A negative value if the first differing character in s1 is less than
 *     that in s2 (converted to unsigned char).
 *   - Zero if the compared portions are equal.
 *   - A positive value if the first differing character in s1 is greater than
 *     that in s2 (converted to unsigned char).
 *
 * Behavior notes and edge cases:
 *   - If n == 0 the function returns 0 (no characters compared).
 *   - The function iterates comparing s1[i] and s2[i] while i < n - 1 and
 *     neither character is the NUL terminator. If a difference is found
 *     during that loop it returns the difference s1[i] - s2[i].
 *   - Important: this implementation has a logic flaw compared to the
 *     standard strncmp: it only compares up to n-1 characters (because of
 *     the loop condition i < n - 1) and it unconditionally returns 0 if the
 *     loop exits without finding a difference. As a result, differences at
 *     index n-1 (the nth character) or differences that occur when one
 *     string ends exactly at the compared boundary may not be detected and
 *     the function may incorrectly return 0.
 *
 * Complexity:
 *   Time: O(min(n, strlen(s1), strlen(s2)))
 *   Space: O(1)
 *
 * Recommendation:
 *   To match standard strncmp semantics, the loop should allow comparison of
 *   up to n characters (not n-1) and, after the loop, the function should
 *   return the difference between s1[i] and s2[i] (using unsigned char
 *   conversion) when i < n.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	i = 0;

	if (n == 0)
		return 0;
	while (i < n - 1 && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}